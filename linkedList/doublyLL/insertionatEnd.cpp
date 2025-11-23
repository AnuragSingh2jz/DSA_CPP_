#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *prev;
};
int main(){
    node *head=nullptr;
    node *n1=new node();
    n1->data=10;
    n1->next=nullptr;
    n1->prev=nullptr;
    head=n1;

    node *n2=new node();
    n2->data=20;
    n2->next=nullptr;
    n2->prev=n1;
    n1->next=n2;        

    node *n3=new node();
    n3->data=30;
    n3->next=nullptr;
    n3->prev=n2;
    n2->next=n3;

    node *n4=new node();
    n4->data=50;
    n4->next=nullptr;
    n4->prev=n3;
    n3->next=n4;

    node *n5=new node();
    n5->data=60;
    n5->next=nullptr;
    n5->prev=n4;
    n4->next=n5;

    node *temp=head;


    // while(temp->next!=nullptr){
    //     temp=temp->next;
    // }

    // while(temp!=nullptr){
    //     cout<<temp->data<<endl;
    //     temp=temp->prev;
    // }



  while(head!=nullptr){
        cout<<head->prev<<"\t"<<head->data<<"\t"<<head->next<<endl;
        head=head->next;
    }
  

return 0;

   
}
