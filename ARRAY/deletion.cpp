#include<iostream>
using namespace std;
int main(){
    int a[100],n,pos;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the position arry which you want to delete"<<endl;
    cin>>pos;
    for(int i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<"\t";
    }

    return 0;
}