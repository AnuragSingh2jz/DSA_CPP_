#include<iostream>
using namespace std;
class node {
public:
    int data;
    node* next;
};

int main() {
    node* head = nullptr;
    node* n1 = new node();
    n1->data = 10;
    n1->next = head;
    head = n1;

    node* n2 = new node();
    n2->data = 20;
    n2->next = head;
    head = n2;

    node* n3 = new node();
    n3->data = 30;
    n3->next = head;
    head = n3;

    node* n4 = new node();
    n4->data = 50;
    n4->next = n3;
    n3 = n4;

    node *p=head;
    node *q=head;
    while(p!=nullptr&&q!=nullptr&&q->next != nullptr){
        p=p->next;
        q=q->next->next;
        if(p==q){
            cout<<"the linked list is looped "<<endl;
            return 0;
        }
    }

    cout<<"the linked list does not contain loop "<<endl;

  

    return 0;
}