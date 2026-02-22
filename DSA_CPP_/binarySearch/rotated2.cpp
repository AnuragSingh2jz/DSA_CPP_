// how it is different from rotated 1
/*
since, seaching in rotated sorted array was based on 
finding the sorted half i.e = [7,8,9,1,2,3,4]
exeption = [1,0,1,1,1] here left & right half both are sorted 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,1,1,0,1};
    int l =0;
    int target =0;
    int h = nums.size()-1;
    while(l<=h){
        int m = (l+h)/2;
        if(nums[m] == target) {
            cout<<m<<endl;
            return 0;
        }
        if(nums[l] == nums[m] && nums[h] == nums[m]){
            l++;
            h--;
            continue;
        }
        if(nums[l]<=nums[m]){
            if(nums[l]<=target && nums[m]>=target) h=m-1;
            else l=m+1;
        }else{
            if(nums[m]<=target && nums[h]>=target) l=m+1;
            else h= m-1;

        }
    }
}