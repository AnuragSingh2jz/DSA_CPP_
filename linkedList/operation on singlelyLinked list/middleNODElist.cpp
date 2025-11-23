#include<iostream>
using namespace std;
class node {
    public: int data;
    node * next;
};
int main(){
    node *head =nullptr;

    node *n1 = new node();
    n1->data = 1;
    n1->next = head;
    head = n1;
    
    node *n2 = new node();
    n2->data = 2;
    n2->next = head;
    head = n2;

    node *n3 = new node();
    n3->data = 3;
    n3->next = head;
    head = n3;

    node *n4 = new node();
    n4->data = 4;
    n4->next = head;
    head = n4;


    node *n5 = new node();
    n5->data = 5;
    n5->next = head;
    head = n5;


    node *n6 = new node();
    n6->data = 6;
    n6->next = head;
    head = n6;

    node *temp = nullptr;
    node *NewList = temp;
    node *prev = nullptr;
    node *slow  = head;
    node *fast = head;

    while(fast!=nullptr && fast->next !=nullptr){
        prev =slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    // cout<<slow->data<<endl;

    temp = prev->next;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp = temp->next;
    } 



    

    return 0;
}