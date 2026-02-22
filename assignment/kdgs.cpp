#include<iostream>
using namespace std;
int main(){
    int a[100],c=0,t=0;
    
    cout<<"enter the array "<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5-t;j++){
            if(a[j]==a[i]){
                t++;
                for(int k=j;k<4;k++){  // deletion of dublicates
                    a[k]=a[k+1];
                }
            }
            
        }
    }
    cout<<"\t"<<t<<endl;
    for(int i=0;i<5-t;i++){
        cout<<a[i]<<"\t";
    }
return 0;
}