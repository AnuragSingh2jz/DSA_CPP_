#include<iostream>
#include<vector>
using namespace std;

class node{
    public: int val;
    node* lchild;
    node* rchild;
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
    tree(){root = nullptr;}
    void createtree();
    void levelorder();
};


void tree::createtree(){
    queue q(10);
    int x;
    node* p,*t;
    cout<<"enter the value of x :"<<endl;
    cin>>x;
    root = new node();
    root->val = x;
    root->lchild=root->rchild=nullptr;
    q.enqueue(root);

    while(!q.isEmpty()){
        p = q.deque();
        cout<<"enter the value of left child :"<<endl;
        cin>>x;
        if(x!=-1){
            t = new node();
            t->val = x;
            p->lchild = t;
            q.enqueue(t);
        }
        cout<<"enter the val of right child :"<<endl;
        cin>>x;
        if(x!=-1){
            t = new node();
            t->val=x;
            p->rchild = t;
            q.enqueue(t);
        }

    }
    
}

void tree::levelorder(){
    queue q(10);
    q.enqueue(root);
    vector<vector<int>> ans;
    while(!q.isEmpty()){
        vector<int> level;
        int size = q.size();
        for(int i =0;i<size;i++){
            node* node = q.deque();
            if(node->lchild!=nullptr) q.enqueue(node->lchild);
            if(node->rchild!=nullptr) q.enqueue(node->rchild);
            level.push_back(node->val);
        }
        ans.push_back(level);
    }

    for(const auto &level : ans){
        for(int x : level){
            cout<<x<<"  ";
        }
        cout<<endl;
    }
}


int main(){

    tree t;
    t.createtree();
    t.levelorder();
    
    
}


