// // // #include<iostream>
// // // using namespace std;
// // // class node{
// // //     public:int data;
// // //     node *next;
// // // };
// // // int main(){
// // //     node *head=nullptr;
// // //     node *n1=new node();
// // //     n1->data=10;
// // //     n1->next=head;
// // //     head=n1;

// // //     node *n2=new node();
// // //     n2->data=20;
// // //     n2->next=head;
// // //     head=n2;
    
// // //     node *temp1=head;
    
// // //     while(temp1!=nullptr){
// // //         cout<<temp1->data<<endl;
// // //         temp1=temp1->next;
// // //     }

// // //     int val;
// // //     cout<<"enter the value "<<endl;
// // //     cin>>val;
// // //     node *temp=head;
// // //     while(temp->data!=val){
// // //         temp=temp->next;
// // //     }

// // //     node *n3=new node();
// // //     n3->data=50;
// // //     n3->next=temp->next;
// // //     temp->next=n3;
    
// // //     while(head!=nullptr){
// // //         cout<<head->data<<endl;
// // //         head=head->next;
// // //     }
// // // }

// // #include<iostream>
// // using namespace std;
// // class node{
// //     public:int data;
// //     node *next;
// // };
// // int main(){
// //     node *head=nullptr;
// //     node *n1=new node();
// //     n1->data=10;
// //     n1->next=head;
// //     head=n1;

// //     node *n2=new node();
// //     n2->data=20;
// //     n2->next=head;
// //     head=n2;


// //      node *n3=new node();
// //     n3->data=30;
// //     n3->next=head;
// //     head=n3;
// //     node *temp=head;
// //     node *temp1=head;


// //     while(head!=nullptr){
// //         cout<<head->data<<"\t";
// //         head=head->next;
// //     }
// //     cout<<endl;
    
// //     node *previous=nullptr;
// //     int val;
// //     cout<<"enter the value which you want to delete : ";
// //     cin>>val;

// //     while(temp->data!=val){
// //         previous=temp;
// //         temp=temp->next;
// //     }

// //     previous->next=temp->next;

// //     while(temp1!=nullptr){
// //         cout<<temp1->data<<"\t";
// //         temp1=temp1->next;
// //     }

// //     delete temp;
// //     delete previous;

// // }

// #include<iostream>
// using namespace std;
// class node{
//     public:int data;
//     node *next;
// };
// int main(){
//     node *head=nullptr;
//     node *n1=new node();
//     n1->data=10;
//     n1->next=head;
//     head=n1;

//     node *n2=new node();
//     n2->data=20;
//     n2->next=head;
//     head=n2;


//      node *n3=new node();
//     n3->data=30;
//     n3->next=head;
//     head=n3;
//     node *temp=head;
//     node *temp1=head;


//     while(head!=nullptr){
//         cout<<head->data<<"\t";
//         head=head->next;
//     }
//     cout<<endl;
    
//     node *previous=nullptr;
//     int val;
//     cout<<"enter the value which you want to delete : ";
//     cin>>val;
//     int flag;

//     while(temp!=nullptr){
//         if(temp->data==val){
//             flag=1;
//             break;
//         }
//         else{
//             temp=temp->next;
//         }
//     }
//     if(flag==1){
//         cout<<"yes the list is inside the linked list "<<endl;
//     }
//     else cout<<"the list is not inside the linked list "<<endl;


// }

#include<iostream>
using namespace std;
class node{
    public:int data;
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

    node *temp=head;

    int x;

    cout<<"enter 1 for adding the node 2 for searching 3 for printing the node :";
    cin>>x;
    switch(x){
        case 1:{
        node *n3=new node();
        n3->data=50;
        n3->next=head;
        head=n3;

        node *n4=new node();
        n4->data=40;
        n4->next=head;
        head=n4;
        break;
        }

        case 2:{   
        int val;
    cout<<"enter the val : ";
    cin>>val;
    
    
    int flag=0;

    while(temp!=nullptr){
        if(temp->data==val){
            flag=1;
            break;
        }
        else{
            temp=temp->next;
        }
    }
    if(flag==1){
        cout<<"yes the list is present "<<endl;
    }
    else cout<<"no the list is not present in the linked list"<<endl;

    break;
        }

        default: cout<<"enter the correct value "<<endl;
    }

    while(head!=nullptr){
        cout<<head->data<<endl;
        head=head->next;
    }


    
    return 0;




}