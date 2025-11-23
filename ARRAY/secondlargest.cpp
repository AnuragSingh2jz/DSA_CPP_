#include<iostream>
using namespace std;
int main(){
    int a[100],n;
    cout<<"enter the number of element in the array : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int secondLargest=a[0],max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            secondLargest=a[i];
            
        }
    }
}