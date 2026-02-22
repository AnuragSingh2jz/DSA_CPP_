#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[100],n,search;
    cout<<"enter the number of element in an array "<<endl;
    cin>>n;
    cout<<"enter array "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the element you want to search "<<endl;
    cin>>search;
    for(int i=0;i<n;i++){
        if(a[i]==search){
            cout<<"the indexing of "<<search<<" is "<<i<<endl;
            break;
        } 
    }
    return 0;
}
