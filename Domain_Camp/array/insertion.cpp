#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> array = {23,12,43,54,81};
    int k;
    cout<<"Enter the element value: "<<endl;
    cin>>k;
    int postion;
    cout<<"enter the postion :";
    cout<<endl;
    cin>>postion;
    for(int i = array.size()-1;i>postion;i--){
        array[i] = array[i+1];
    }
    array[postion] = k;

    for(int i = 0;i<array.size();i++){
        cout<<array[i]<<endl;
    }
}

