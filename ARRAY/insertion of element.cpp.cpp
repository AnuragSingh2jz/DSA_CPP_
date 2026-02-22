#include<iostream>
using namespace std;
int main(){
    int a[100],pos,c;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    
    cout<<"enter the element tou want to enter "<<endl;
    cin>>c;
    cout<<"enter the position "<<endl;
    cin>>pos;
    for(int i=4;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=c;
    for(int i=0;i<6;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}