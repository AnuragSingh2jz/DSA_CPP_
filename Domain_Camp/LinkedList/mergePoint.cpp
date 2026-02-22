#include<bits/stdc++.h>
using namespace std;

class node{
    public: int value;
    node* next;
    node(int data):value(data), next(nullptr){};  
};

int main(){
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);

    node* head2 = new node(2);
    head2->next = new node(3);
    
    head2->next->next = head->next->next->next;
    
    node* t1 = head;
    node* t2 = head2;

    while(t1!=t2){
        t1 = t1->next;
        t2 = t2->next;
        if(t1 == t2) {cout<<t1->value; break;}
        if(t1->next == nullptr) t1 = head2;
        if(t2->next == nullptr) t2 = head;
    }

}