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


    void create(vector<int> &pre,int n){
        stack<node*> stk;
        node *t,*p;
        int i = 0;
        root = new node();
        root->val = pre[i++];
        root->left = root->right = nullptr;
        p = root;
        while(i<n){
            if(pre[i]<p->val){
                t = new node();
                t->val = pre[i++];
                t->left = t->right = nullptr;
                p->left = t;
                stk.push(p);
                p = t;
            }else{
                while (!stk.empty() && pre[i] > stk.top()->val) {
                    p = stk.top();
                    stk.pop();
                }
                
                    t = new node();
                    t->val = pre[i++];
                    t->left = t->right = nullptr;
                    p->right = t;
                    p = t;
                
            }
        }
    }

    void inorder(node* root){
    if(root == nullptr) return;
    inorder(root->left);
    cout<<root->val<<"    ";
    inorder(root->right);
}


};

int main(){
    vector<int> arr = {25,15,10,20,35,30,40};
    bst b;
    b.create(arr,arr.size());
    b.inorder(b.root);

}








































