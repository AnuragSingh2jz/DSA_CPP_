#include<iostream>
int swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    return x,y;
}
using namespace std;
int main(){
    int a[100],n;
    cout<<"enter the number of element in array ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    cout<<"sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}



