#include<bits/stdc++.h>
using namespace std;

int main(){
    string x = "abcdefg";
    int k =2;
    // for(int i = 0;i<x.size();i=i+2){
        
    // }
    int i =0;
    do{
        swap(x[i],x[i+1]);
        i+=2;
    }
    while(i<x.size() && x.size() < 4);


    for(int i = 0;i<x.size();i++){
        cout<<x[i];
    }
    return 0;
}