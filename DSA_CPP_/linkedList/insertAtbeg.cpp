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
    
//    head=head->next;
   
    while(head!=nullptr){
        cout<<head->data<<"\t";
        head=head->next;
    }

    // delete n3;
    
    return 0;
}