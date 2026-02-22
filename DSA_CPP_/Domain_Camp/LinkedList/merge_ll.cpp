#include<bits/stdc++.h>

using namespace std;

class node{
    public: 
    int value;
    node* next;
    node(int data) :value(data),next(nullptr){}
};

int main(){
    // 5 , 13, 30 

    node* head  = new node(5);
    head->next = new node(13);
    head->next->next= new node(20);

    
   node* head2 = new node(1);
   head2->next = new node(6);
   head2->next->next = new node(23);


    node* dummynode = new node(-1);
    node* temp= dummynode;
    node * t1 = head;
    node* t2 = head2;

    while(t1!=nullptr && t2!=nullptr){
        if(t1->value<t2->value){
            temp->next = t1;
            t1 = t1->next;
        }else {
            temp->next = t2;
            t2 = t2->next;
        }
        temp = temp->next;
    }

    while(t1!=nullptr){
        temp->next = t1;
        t1 = t1->next;
    }
    while(t2!=nullptr){
        temp->next = t2;
        t2= t2->next;
    }
    node* newhead = dummynode->next;
 
    while(newhead!=nullptr){
        cout<<newhead->value<<" ";
        newhead = newhead->next;
    }

    

}