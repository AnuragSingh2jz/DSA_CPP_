
//237. Delete Node in a Linked List
#include<iostream>
using namespace std;
class node{
    public:
    node(int x, node* next = nullptr) : val(x), next(next) {}
    int val;
    node* next;
};

int main(){
    node* head = new node(9);
    head->next = new node(6);
    head->next->next = new node(5);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(3);

    int n = 2;

    int c= 0;
    node *prev = head;
    node* temp = head;
    node* temp2 = head;

    while(temp!=nullptr){
        c++;
        temp = temp->next;
    }
    int x = c-n;
    int i =0;
    while(i!=x-1){
        prev = prev->next;
        i++;
    }
    // cout<<prev->val;
    prev->next = prev->next->next;

    while(head!=nullptr){
        cout<<head->val<<endl;
        head = head->next;
    }





    return 0;
}