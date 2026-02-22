/*You are provided with two arrays. Write a program to find numbers 
which are present in first array, but not present in the second array.
*/
#include<iostream>
using namespace std;
int main(){
    
    int b[100],a[100];
    cout<<"enter the first array"<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"enter the second array "<<endl;
    for(int i=0;i<5;i++){
        cin>>b[i];
    }
    cout<<"element which are present in first array but not in second array"<<endl;
    int c=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i]==b[j]) c++;
        }
        if(c==0){
            cout<<a[i]<<endl;
        }
        c=0;
    }
    return 0;
}



