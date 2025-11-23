#include<iostream>
using namespace std;

class node{
    public: int data;
    node* next;
};

node* top = nullptr;

void push(int value){
    node* NewNode = new node();
    NewNode->data = value ;
    NewNode->next = top;
    top = NewNode;
}


void pop(){
    if(top == nullptr) cout<<"stack underflow "<<endl;
    else{
        node * temp = top;
        top = top->next;
        delete temp;
    }
}

void display(){
    node* temp = top;
    if(top == nullptr) cout<<"stack is empty"<<endl;
    else{
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp = temp->next;
    }    
    }
    
}

int main(){
    push(12);
    push(52);
    push(32);
    push(3);
    pop();
    pop();
    display();
}