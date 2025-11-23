#include<iostream>
using namespace std;
int stack[100],n,top=-1;
void push(int value){
    if(top>=n-1){
        cout<<"stack overflow"<<endl;
    }else{
        top=top+1;
        stack[top]=value;
    }
}
void pop(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
    }else{
        int item=stack[top];
        top=top-1;
    }

}
void display(){
    if(top>=0){
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<endl;
        }
    }
}
int main(){
    cout<<"enter the number of element you want to push :";
    cin>>n;
    int x[10];
    for(int i=0;i<n;i++){
        cin>>x[i];
        push(x[i]);
    }
    
    display();
    int y;
    cout<<"how many element you want to pop :";
    cin>>y;
    cout<<endl;
   

    for(int i=0;i<y;i++){
        pop();
    }
 display();

}