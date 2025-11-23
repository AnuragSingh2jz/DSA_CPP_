#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int val;
    node* left;
    node* right;
};

class bst{
    public:
    node* root;
    bst(){root = nullptr;}

    void create(vector<int> &arr,int n){
        stack<node*> stk;
        node* t, *p;
        int x ,i = 0;
        root = new node();
        root->val = arr[i++];
        root->left = root->right = nullptr;
        p = root;
        while(i<n){
            if(arr[i]<p->val){
                t = new node();
                t->val = arr[i++];
                t->left = t->right = nullptr;
                p->left= t;
                stk.push(p);
                p = t;
            }else{
                while(!stk.empty()&&stk.top()->val<arr[i]){
                    p = stk.top();
                    stk.pop();
                }
                t = new node();
                 t->val = arr[i++];
                t->left = t->right = nullptr;
                p->right= t;
                p = t;
            }
        }

        
    }
    void inorder(node* root){
            if(root == nullptr) return;
            inorder(root->left);
            cout<<root->val<<"  ";
            inorder(root->right);
        }

};

int main(){
    vector<int> arr = {25,15,10,20,35,30,40};
    int n = arr.size();
    bst b;
    b.create(arr,n);
    b.inorder(b.root);

}
