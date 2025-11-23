#include<iostream>
using namespace std;

class node{
    public:int val;
    node* right;
    node* left;
};

class queue{
    public: int front;
    int rear;
    node* q[10];
    int n;
    queue(int f){
        front =-1;
        rear=-1;
        n=f;
    }

    void enqueue(node* val){
        if(rear == n -1) cout<<"queue overflow"<<endl;
        else if(rear == -1 && front == -1){
            front++;
            rear++;
            q[rear] = val;
        }else{
            rear++;
            q[rear] = val;
        }
    }

    node* deque(){
        if(front == -1) {
            cout<<"queue underflow"<<endl;
            return nullptr;}
        else if(front == rear){
            node* garbage = q[front];
            front=-1;
            rear=-1;
            return garbage;
        }
        else {
            node* garbage = q[front];
            front++;
            return garbage;
        }
    }
    bool isEmpty(){
        return front == -1;
    }

    

    int size(){
        
        return (rear - front +1);
    }
};


class tree{
    public:
    node* root;
    void createTree(){
        queue q(10);
        int x;
        node *p,*t;
        cout<<"enter the value of the root Node : "<<endl;
        cin>>x;
        root = new node();
        root->left = root->right = nullptr;
        q.enqueue(root);
        while(!q.isEmpty()){
            p = q.deque();
            cout<<"enter the value of left child : "<<endl;
            cin>>x;
            if(x!=-1){
                t = new node();
                t->val = x;
                p->left = t;
                q.enqueue(t);
            }
            cout<<"enter the value of right child : "<<endl;
            cin>>x;
            if(x!=-1){
                t = new node();
                p->right = t;
                t->val = x;
                q.enqueue(t);
            }
        }
    }
    
    
    int cout_Leaf_nodes(node *p){
        int x,y;
        if(p==nullptr) return 0;
            x = cout_Leaf_nodes(p->left);
            y = cout_Leaf_nodes(p->right);
            if(p->left==nullptr && p->right == nullptr) return x+y+1;

            return x+y;

    }
};

int main(){

    // for counting the node with 1 child < p->left!=nullptr && p->right == nullptr || p->left==nullptr && p->right != nullptr>
    // for counting the node with 2 child 

    tree t;
    t.createTree();
    int x  = t.cout_Leaf_nodes(t.root);
    cout<<x<<endl;

    return 0;
}





