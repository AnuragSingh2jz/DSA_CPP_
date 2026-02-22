#include<bits/stdc++.h>
using namespace std;
class node{
    public: int val;
    node* next;
    node(int dta):val(dta),next(nullptr){}

};

int main(){
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);

    node* slow = head;
    node* fast = head;
    while(fast->next!=nullptr && fast!=nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->val<<endl;

    //cout the length

    node* temp = head;
    int c =0;
    while(temp!=nullptr){
        c++;
        temp =temp->next;
    }

    cout<<"lenght is "<<c;



    return 0;
}