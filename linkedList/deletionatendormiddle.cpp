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
    n2->data=5;
    n2->next=head;
    head=n2;

    node *n3=new node();
    n3->data=2;
    n3->next=head;
    head = n3;
    
    int val;
    cout<<"enter the val";
    cin>>val;

    node *temp1=head;
    node *prev=nullptr;

    while(temp1->data!=val){
        prev=temp1;
        temp1=temp1->next;
    }




    prev->next=temp1->next;

    while(head!=nullptr){
        cout<<head->data<<endl;
        head=head->next;
    }



}