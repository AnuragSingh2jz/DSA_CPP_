#include<iostream>
#include<utility>
using namespace std;
int main(){
    int a[100],n;
    cout<<"enter the number of element in array ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;

    }
    cout<<"sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}