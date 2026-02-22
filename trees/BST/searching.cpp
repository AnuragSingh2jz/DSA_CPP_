#include<iostream>
using namespace std;

class node{
    public:int val;
    node* left;
    node* right;
    node(int data){left = right = nullptr; val=data;}
};

node* BS(node* root,int key){
    while(root !=nullptr){
        if(root->val == key) return root;
        else if(root->val>key) root = root->left;
        else root = root->right;
    }
    return nullptr;
}
// recursive function
node* BSRecursive(node* root,int key){
    if(root == nullptr) return nullptr;
    if( root->val == key) return root;
    else if( root->val> key) return BSRecursive(root->left,key);
    else return BSRecursive(root->right,key);
}

int main(){
    node* root = new node(30);
    root->left = new node(15);
    root->right = new node(50);
    root->left->left = new node(10);
    root->left->right = new node(20);
    root->right->left = new node(40);
    root->right->right = new node(60);

    cout<<BS(root,60)<<endl;

    return 0;
}