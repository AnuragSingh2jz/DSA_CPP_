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


    node* head1 = new node(1);
    head1->next = new node(3);
    head1->next->next = new node(4);

    // addition of two linklist starts from here

    node* t1 = head;
    node* t2 = head1;
    node* dummynode = new node(-1);
    node* temp = dummynode;

    int c = 0,sum;

    while(t1!=nullptr || t2!=nullptr){
        sum = c;
        if(t1) {
            sum += t1->val;
            t1 = t1->next;
        }
        if(t2) {
            sum += t2->val;
            t2 = t2->next;
        }
        node* nn = new node(sum%10);
        temp->next = nn;
        temp = nn;

        c = sum/10;
    }

    if(c>0){
        temp->next = new node(c);
    }
    temp = dummynode->next;
    while(temp!= nullptr){
        cout<<temp->val<<"\t";
        temp =temp->next;
    }
    return 0;
}