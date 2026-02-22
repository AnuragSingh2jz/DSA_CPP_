/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> nums = {1,2};
    int n = nums.size();
    int d1 = INT_MAX;
    bool d1_found = false;
    int k;
    
    for(int i =0;i<n;i++){
        if(d1>nums[i]){
            d1 = nums[i];
            k = i;
        }
    }
    for(int i = k;i<n;i++){
        if(d1<nums[i]) {
            d1 = i;
            d1_found = true;
        }
    }

    if(d1_found == true) cout<<d1+1<<endl;
    else if(d1_found == false) cout<<"not dound";



    



    return 0;
}

