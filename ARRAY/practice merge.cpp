#include<iostream>
using namespace std;
int main(){
int a[5],b[5],c[5];
cout<<"enter the first array"<<endl;
for(int i=0;i<5;i++){
    cin>>a[i];
}
cout<<"enter the second array"<<endl;
for(int j=0;j<5;j++){
    cin>>b[j];
}
int i=0,j=0,k=0;
while(i<5&&j<5){
    if(a[i]<a[j]){
        c[k++]=a[i++];
    }
    else  c[k++]=b[j++];
}
for(int k=0;k<10;k++){
    cout<<c[k]<<endl;
}




















}