#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int l,int m,int h){
    vector<int> temp;
    int left = l;
    int right = m+1;
    while(left<=m && right<=h ){
        if(arr[left]<=arr[right]) {
            temp.emplace_back(arr[left]);
            left++;
        }else{
            temp.emplace_back(arr[right]);
            right++;
        } 
    }
    while(left<=m){
        temp.emplace_back(arr[left]);
        left++;
    }
    while(right<=h){
        temp.emplace_back(arr[right]);
        right++;
    }
    for(int i= l;i<=h;i++){
        arr[i]= temp[i-l];
    }

}

void MergeSort(vector<int>&arr,int l,int h){
    if(l>=h) return;
    else{
        int m = (l+h)/2;
        MergeSort(arr,l,m);
        MergeSort(arr,m+1,h);
        merge(arr,l,m,h);
    }
}

int main(){
    vector<int> arr = {6,3,2,1,6};
    MergeSort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
