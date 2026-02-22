//Find First and Last Position of Element in Sorted Array
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8; 
    vector<int> arr;
    int l = 0;
    int h = nums.size() -1;
    int ans = -1;
    int l1 = 0;
    int h1 = nums.size() -1;
    int ans1 = -1;
    while(l<=h){
        int m = (l+h)/2;
        if(nums[m] == target){
            ans = m;
            h=m-1;
        }else if(nums[m] < target){
            l = m+1;
        }else h=m-1;
    }
    arr.push_back(ans);



    while(l1<=h1){
        int m1 = (l1+h1)/2;
        if(nums[m1]==target) {
            ans1 =m1;
            l1= m1+1;
        }else if(nums[m1] < target) l1=m1+1;
        else h1 = m1-1;
    }
    arr.push_back(ans1);



    
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }

}
