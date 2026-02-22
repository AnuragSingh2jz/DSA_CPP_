#include<iostream>
using namespace std;
int top=-1,a[100],b=32768;
int push(int value){
    if(top==5-1) cout<<"stack overflow"<<endl;
    else{
        top++;
        a[top]=value;
    }
    if(a[top]<b) b=a[top]; 
    
}
void display(){
    if(top>=0){
        for(int i=top;i>=0;i--){
            cout<<a[i]<<endl;
        }
    }
}
void pop(){
    if(top==-1) cout<<"stack underflow"<<endl;
    else{
        int item=a[top];
        top--;
    }
}
void min(){

    cout<<"minimum number is "<<b<<endl;
}

int main(){
    push(100);
    push(90);
    push(2);
    push(200);
    push(10);
    // push(23);
    // push(23);
    pop();
    display();
    min();//find minimum in the complexity of o(1)


return 0;
}