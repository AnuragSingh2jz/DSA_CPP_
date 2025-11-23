#include<iostream>
using namespace std;
int top=-1,stack[100],n; // 
void push(int value){
    if(top>=n-1){
        cout<<"**stack Overflow**"<<endl;
    }else{
        top=top+1;
        stack[top]=value;
    }
}
void pop(){
    if(top==-1){
        cout<<"**stack underflow**"<<endl;
    }
    int item=stack[top];
    top=top-1;
}
void display(){
    if(top>=0){
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<"\t";
        }
    }
}
int main(){
    cout<<"enter the value of n :";
    cin>>n;
    cout<<endl;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    pop();


    display();

return 0;
}

// #include<iostream>
// using namespace std;
// int a[100],top=-1,n=5;
// void push(int value){
//     if(top>=n-1) cout<<"stack overflow"<<endl;
//     else{
//         top++;
//         a[top]= value;
//     }
// }

// void pop(){
//     if(top==-1) cout<<"stack underflow"<<endl;
//     else{
//         int garbage = a[top];
//         top--;
//     }
// }

// void display(){
//     if(top>=0){
//         for(int i = top;i>=0;i--){
//             cout<<a[i]<<"\t";
//         }
//     }
// }

// int main(){
//     push(5);
//     push(5);
//     push(5);
//     push(5);
//     push(5);
//     push(5);
//     push(5);

//     display();
// }



