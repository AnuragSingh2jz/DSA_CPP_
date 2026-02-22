#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,-3,1,1,1,4,2,-3};
    int n = nums.size();

    int i = 0,j = 0;
    int sum=0,c = 0;
    while(j<n){
        sum+=nums[j];

        if(sum==3){
            c++;
            sum = 0;
            i = j;
        }



        j++;
    }
    cout<<c<<endl;










}