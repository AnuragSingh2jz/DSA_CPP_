#include<iostream>
#include<utility>
using namespace std;
int main(){
    int a[100],n;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<"enter the elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++){
        swap(a[i],a[n-i-1]);
    }
    cout<<"reversed array is:  ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}