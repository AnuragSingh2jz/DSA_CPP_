#include<bits/stdc++.h>
using namespace std;


void insert(vector<int> &arr,int n){
    int temp = arr[n],i=n;
    while(i>0 && arr[(i-1)/2]<temp){
        arr[i] = arr[(i-1)/2];
        i = (i-1)/2;
    }
    arr[i] = temp;
}

void heap(vector<int> &arr,int n){
    
    for(int i =1;i<n;i++){
        insert(arr,i);
    }
}


int main(){
vector<int> arr = {10,20,30,25,5,40,35};
int n = arr.size();

heap(arr,n);

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<"\t";
}

}