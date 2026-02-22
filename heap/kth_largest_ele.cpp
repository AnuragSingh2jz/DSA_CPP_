#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &arr,int n){
    int temp = arr[n];
    int i=n;
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

void deletion(vector<int> &arr,int n){
    int temp = arr[0];
    arr[n] = arr[0];
    int i = 0;
    int j = 2*i+1;
    while(j<n-1){
        if(arr[j+1]>arr[j]) j+=1;
        if(arr[j]>arr[i]){
            swap(arr[i],arr[j]);
            i=j;
            j=2*j+1;
        }else break;
    }
}




int kth_largest_element(vector<int> &arr,int k){
    int n = arr.size()-1;
    heap(arr,n);

    while(k>0){
        deletion(arr,n);
        k--;
    }
    return arr[0];

}

int main(){
    vector<int> arr = {10,20,30,25,5,40,35};

}