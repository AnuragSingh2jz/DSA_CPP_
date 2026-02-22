#include<iostream>
using namespace std;

class node{
    public:int val;
    node* left;
    node* right;
    node(int data){left = right = nullptr; val=data;}
};

void inserion(node* root,int val){
    node* prev,*current = root,*p;

    while(current!=nullptr){
        prev = current;
        if(current->val == val) return;
        else if( current->val > val) current = current->left;
        else current = current->right;
    }

    p = new node(val);
    p->left = p->right = nullptr;
    if(prev->val>val) prev->left = p;
    else prev->right = p;

}

void inorder(node* root){
    if(root == nullptr) return;
    inorder(root->left);
    cout<<root->val<<"    ";
    inorder(root->right);
}


node* Indpre(node* root){
    while(root && root->right != nullptr){
        root = root->right;
    }
    return root;
}

node* Indsucc(node* root){
    while(root && root->left != nullptr){
        root = root->left;
    }
    return root;
}

int height(node* root){
    int x,y;
    if(root == nullptr) return 0;
    x = height(root->left);
    y = height(root->right);
    return x>y?x+1:y+1;
}



node* Delete(node* root,int key){
    if(root==nullptr) return nullptr;
    
    node* q = nullptr;
    if(root->val>key) root->left = Delete(root->left,key);
    else if(root->val< key) root->right = Delete(root->right,key);
    else {
        if(root->left == nullptr && root->right == nullptr){
            delete(root);
            return nullptr;
        }
        if(height(root->left)>height(root->right)){
            q = Indpre(root->left);
            root->val = q->val;
            root->left = Delete(root->left,q->val);

        }else{
            q = Indsucc(root->right);
            root->val = q->val;
            root->right = Delete(root->right,q->val);
        }
    }
    return root;
}










int main(){
    node* root = new node(30);
    

    inserion(root,33);
    inserion(root,3);
    inserion(root,2);
    inserion(root,20);
    inserion(root,35);
    inserion(root,45);
    inserion(root,13);
    inserion(root,12);

    Delete(root,30);

    inorder(root);
    cout<<endl;
    Indpre(root->left);

    return 0;
}