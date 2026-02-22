#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;
};

int main(){
    node* head = nullptr;

    node* n1 = new node();
    n1->val = 2;
    n1->next = head;
    head = n1;

    node* n2 = new node();
    n2->val = 5;
    n2->next = head;
    head = n2;

    node* n3 = new node();
    n3->val = 2;
    n3->next = head;
    head = n3;

    node* n4 = new node();
    n4->val = 3;
    n4->next = head;
    head = n4;

    node* n5 = new node();
    n5->val = 4;
    n5->next = head;
    head = n5;

    node* n6 = new node();
    n6->val = 1;
    n6->next = head;
    head = n6;
    int k = 3;

    node* temp = head;

    node* dummy =new node();
    node* t1 = dummy;
    node* dummy2 =new node();
    node* t2 = dummy2;

    while(temp!= nullptr){
        if(temp->val>=k){
            t2->next = temp;
            t2 = temp;
            temp = temp->next;
        }else{
            t1->next = temp;
            t1=temp;
            temp=temp->next;
        }
    }
    t2->next = nullptr;
    t1->next = dummy2->next;
    node* head2 = dummy->next;

    while(head2!=nullptr){
        cout<<head2->val<<endl;
        head2=head2->next;
    }


}