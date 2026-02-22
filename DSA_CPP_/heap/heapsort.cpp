// to delete a element from the heap 
//1. create a heap <insertion>
//2. delete function

#include<bits/stdc++.h>
using namespace std;

void insertion(vector<int> &nums,int n){
    int temp = nums[n];
    int i = n;
    while(i>0 && nums[(i-1)/2]<temp){
        nums[i] = nums[(i-1)/2];
        i = (i-1)/2;
    }
    nums[i] = temp;
}
void CreateHeap(vector<int> &nums,int n){
    for(int i=1;i<n;i++){
        insertion(nums,i);
    }
}


void deletion(vector<int> &nums,int n){
    int x = nums[0]; // if used in heap sort
    nums[0] = nums[n];
    int i = 0;
    int j = 2*i+1;
    
    while(j<n-1){
        if(nums[j+1]>nums[j]) j=j+1;
        if(nums[j]>nums[i]){
            swap(nums[j],nums[i]);
            i = j;
            j = 2*j+1;
        }else break;
    }
    nums[n] = x;
}


int main(){
    vector<int> nums = {10,20,30,25,5,40,35};
    
    CreateHeap(nums,nums.size());

    for(int i = nums.size()-1;i>=0;i--){
    deletion(nums,i);

    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<"\t";
    }
    return 0;
}