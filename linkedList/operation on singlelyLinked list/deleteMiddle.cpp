#include<bits/stdc++.h>
using namespace std;
class node{
    public: int data;
    node *next;
};
int main(){
    node *head =nullptr;
    node *n1 = new node();
    n1->data = 5;
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

    node *slow = head;
    node *fast = head;
    node *prev = nullptr;

    if(head==nullptr) {} // for empty ll
    if(head->next == nullptr){ // for single element in ll
        delete head;
        head = nullptr;
    }

    while(fast != nullptr && fast->next!= nullptr){
        prev = slow;
        fast = fast ->next->next;
        slow = slow->next;
    }
    prev->next = slow->next;
    delete slow;

    while(head!=nullptr){
        cout<<head->data<<endl;
        head = head->next;
    }

    return 0;

}