#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;
};

class queue{
    public:
    node* front;
    node* rear;
    queue(){
    front = nullptr ; 
    rear = nullptr;
    }

    void enqueue(int data){
        node* nn = new node();
        nn->val = data;
        nn->next = nullptr;
        if(front == nullptr){
            front = nn;
            rear = nn;
        }else{
            rear->next = nn;
            rear == nn;
        }
    }

    void deque(){
        if(front == nullptr){
            cout<<"queue underflow "<<endl;
        }
        else{
            node* temp = front->next;
            delete front;
            front = temp;
        }
    }

};