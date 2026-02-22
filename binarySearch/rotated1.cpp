#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {7,8,9,10,1,2,3,4,5};
    int target = 10;
    int l = 0;
    int h = nums.size()-1;

    while(l<=h){
        int m  = (l+h)/2;
        if(nums[m] == target) {
            cout<<m;
            return 0;
        }
        if(nums[l]<=nums[m]){
            if(nums[l]<=target && nums[m]>=target) h=m-1;
            else l=m+1;
        }else{
            if(nums[m]<=target && nums[h]>=target) l= m+1;
            else h = m-1;
        }
    }
}