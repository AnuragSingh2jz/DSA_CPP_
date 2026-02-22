#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node *next;
};
int main(){

    node *head=nullptr;
    node *n1=new node();
    n1->data=10;
    n1->next=head;
    head=n1;

    node *n2=new node();
    n2->data=20;
    n2->next=head;
    head=n2;

    node *n3=new node();
    n3->data=30;
    n3->next=head;
    head=n3;
    cout<<endl;

    node *temp=head;
    
    int x;
    cout<<"enter 1 for adding more list 2 for search 3 for printing : ";
    cin>>x;

    switch(x){
        case 1:{
            node *n4=new node();
            n4->data=50;
            n4->next=head;
            head=n4;

            node *n5=new node();
            n5->data=60;
            n5->next=head;
            head=n5;
            break;
        }
        case 2:{
            int flag=0;
            int val;
            cout<<"enter the value you want to search "<<endl;
            cin>>val;
            while(temp!=nullptr){
                if(temp->data==val){
                    flag=1;

                }
                else temp=temp->next;

            }
            if(flag==1) cout<<"yes the list is present "<<endl;
            else  cout<<"nooo the list is not present "<<endl;
            break;
        }

        case 3:{
            temp=head;
            while(temp!=nullptr){
                cout<<temp->data<<endl;
                temp=temp->next;
            }
            break;

        }
        default: cout<<"sdfuhidc"<<endl;
        
    }
    cout<<"list is ";

    while(head!=nullptr){
        cout<<head->data<<endl;
        head=head->next;
    }


    
}