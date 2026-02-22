#include<iostream>
using namespace std;
class stack{
    public:
    int s[100];
    int n;
    int top;
    stack(){
        n=10;
        top=-1;
    }
    
    void push(int val){
        if(top>=n) cout<<" stack over flow "<<endl;
        else{
            top=top+1;
            s[top]=val;
        }
    }

    void pop(){
        if(top==-1) cout<<" stack underflow "<<endl;
        else{
            int item=s[top];
            top=top-1;
        }
    }

    void display(){
        if(top>=0){
            for(int i=top;i>=0;i--){
                cout<<s[i]<<endl;
            }
        }
    }
    void information(){
        if(top>=n){
            cout<<"**stack overflow**"<<endl;
        }
        else if(top==-1){
            cout<<"**stack underflow**"<<endl;
        }
        else cout<<"stack is neither overflow nor underflow"<<endl;
    }
};
int main(){
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    int x;
    cout<<"enter 1 for push 2 for pop 3 for cheacking the over and underflow ";
    cin>>x;
    cout<<endl;
    switch(x){
        case 1:{
            int value;
            cout<<"enter the value you want to insert in the stack"<<endl;
            cin>>value;
            s1.push(value);
            break;
        }
        case 2:{
            s1.pop();
            break;
        }
        case 3:{
            s1.information();
            break;
        }
        default: cout<<"enter the valid value "<<endl;   
    }

    s1.display();
}