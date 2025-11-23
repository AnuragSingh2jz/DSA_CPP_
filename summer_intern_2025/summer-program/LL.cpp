#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;
    node(int val):val(val),next(nullptr){}
};

node* push_front(node*head,int val){
    node* newnode = new node(val);
    newnode->next = head;
    return newnode;
}
node* push_back(node* head,int val){
    node* n = new node(val);
    if(head == nullptr){
        return n;
    }
    node* temp  = head;
    while(temp->next !=nullptr){
        temp = temp->next;
    }
    temp->next = n;
    return head;
}
void display(node* head){
    while(head!=nullptr){
        cout<<head->val<<"->";
        head = head->next;
    }
}


void main(){

    node* head = nullptr;
    head = push_back(head,10);
    head = push_back(head,20);
    head = push_back(head,30);
    head = push_back(head,40);
    display(head);

    
}