#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a = {23,12,43,54,81};
    int pos;
    int n = a.size();
    
    
    cout<<"enter the position arry which you want to delete"<<endl;
    cin>>pos;
    for(int i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<"\t";
    }
}