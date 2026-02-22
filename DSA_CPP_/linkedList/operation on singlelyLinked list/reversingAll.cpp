#include<iostream>
using namespace std;
class node{
    public:int data;
    node *next;
};

int main(){
    node *head= nullptr;

    node *n1=new node();
    n1->data=10;
    n1->next=head;
    head=n1;

    node*n2=new node();
    n2->data=51;
    n2->next=head;
    head=n2;

    node *n3=new node();
    n3->data=2;
    n3->next=head;
    head = n3;
    

    node *p=head;
    node *q=nullptr;
    node *r=nullptr;



    while(p!=nullptr){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    
    cout<<"reversed linked list is:    "<<endl;


    while(q!=nullptr){
        cout<<q->data<<endl;
        q=q->next;
    }





}