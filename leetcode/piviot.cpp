#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {4,5,5,5,1,2,3,4};
    // find the piviot element 
    int l = 0;
    int h = nums.size()-1;
    // int min = INT16_MAX;
    // while(l<=h){
    //     int m = (l+h)/2;
    //     if(nums[m]>=nums[l]){ // left half is sorted
    //         if(min>nums[l]) min = nums[l];
    //         l=m+1;
    //     }else{
    //         if(min>nums[m]) min = nums[m];
    //         h=m-1;
    //     }
    // }
    // cout<<min<<endl;

    while(l<h){
        int m = (l+h)/2;
        if(nums[m]>nums[h]) l=m+1;
        else h=m;
    }
    cout<<l<<endl;

}