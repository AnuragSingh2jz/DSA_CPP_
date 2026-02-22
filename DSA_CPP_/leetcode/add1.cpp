#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> nums = {9,9,9,9};
    int c = 1;
    int sum = 0;
    for(int i = nums.size()-1;i>=0;i--){
        sum = nums[i] + c;
        nums[i] = sum%10;
        c = sum/10;
        if(c==0) break;
    }
    if(c>0) nums.insert(nums.begin(),c);
    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<"\t";
    }
}