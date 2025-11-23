#include<iostream>
using namespace std;
int main(){
    int a[100],sum;
    cout<<"enter the array "<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    
    int k;
    cout<<"enter the value of key ";
    cin>>k;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum=a[i]+a[j];
            if(sum==k){
                cout<<a[i]<<"\t"<<a[j]<<"\t=\t"<<k<<endl;
            }
            sum=0;
        }
    }
    return 0;
}

