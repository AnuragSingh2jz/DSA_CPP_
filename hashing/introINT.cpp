#include<bits/stdc++.h>
using namespace std;
// the maximum size hashing array of int type takes is 1e7
int main(){
    int a[6] = {1,2,1,3,4,4}; 
    int hash[7] ={0};  //  the maximum size hashing array of int type takes is 1e6
    int n;

    cout<<"enter the number :"<<endl; 
    cin>>n;
    for(int i =0;i<6;i++){
        hash[a[i]] +=1;
    }

    cout<<hash[n]<<endl;


    
    return  0;
}