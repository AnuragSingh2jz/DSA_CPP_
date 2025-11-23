#include<iostream>
using namespace std;
class node{
    public:
    int value;
    node* next;
    node(int val){ 
        value=val;
     next=nullptr;
     }
};
class linkedlist{
    public:
    node* head;
    linkedlist():head(nullptr){}
    void insert(int val){
        node* newnode= new node(val);
        if(head == nullptr){
            head =newnode;
        } else{
            node* current=head;
            while(current->next!=nullptr)
            {
                current=current->next;
            }
            current->next=newnode;
        }
    }
    node display(){
        node* current=head;
        while(current!=nullptr){
            cout<<current->value<<"\t";
            current=current->next;
        }
        cout<<endl;
    }

};
int main() {
    linkedlist list;

    // Insertion
    int data;
    cout << "Enter data to insert (or type -1 to finish): ";
    cin >> data;
    while (data != -1) {
        list.insert(data);
        cout << "Enter data to insert (or type -1 to finish): ";
        cin >> data;
    }

    // Display
    cout << "Linked List: ";
    list.display();

    return 0;
}
