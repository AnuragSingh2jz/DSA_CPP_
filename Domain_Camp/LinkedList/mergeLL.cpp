#include<bits/stdc++.h>
using namespace std;
// merge the ll 
// find the middle node
// find the length
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
    
    node* head2 = new node(11);
    head2->next = new node(22);
    head2->next->next = new node(33);
    head2->next->next->next = new node(44);

    node* temp = head;
    while(temp->next!=nullptr){
       temp = temp->next;
    }
    temp->next = head2;

    while(head!=nullptr){
        cout<<head->val<<" ";
        head = head->next;
    }

    


    
}