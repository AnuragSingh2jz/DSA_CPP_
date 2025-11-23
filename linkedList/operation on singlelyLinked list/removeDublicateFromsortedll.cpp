#include<iostream>
using namespace std;
class node{
    public:int data;
    node *next;
};

int main(){
    node *head= nullptr;

    node *n1=new node();
    n1->data=5;
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

    node *n4=new node();
    n4->data=2;
    n4->next=head;
    head=n4;

    node *temp = head;
    while(temp!=nullptr && temp->next!=nullptr){
        if(temp->data == temp->next->data){
            node *dubli = temp->next;
            temp->next = temp->next->next;
            delete dubli;
        }else{
            temp = temp->next;
        }
    }







    // node *prev=head;

    // while(temp!=nullptr){
    // if(temp->data!=prev->data){
    //     prev=temp;
    //     temp=temp->next;
    // }
    // else{ 
    //     prev->next=temp->next;
    //     delete temp;
    //     temp = prev->next;
    // }
    // }


    while(head!=nullptr){
        cout<<head->data<<endl;
        head=head->next;
    }
    return 0;

}

