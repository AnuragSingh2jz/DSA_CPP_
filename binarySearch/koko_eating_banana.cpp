
#include<bits/stdc++.h>
using namespace std;
int ceil(int x,vector<int> nums){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%x != 0) sum+=(nums[i]/x)+1;
        else sum+=nums[i]/x; 
    }
    return sum;
}
int main(){
    vector<int> nums= {805306368,805306368,805306368};
    int max = *max_element(nums.begin(), nums.end());
    int l=1;
    int h = max;
    int ans = -1;
    int hrs = 1000000000;
    // cout<<max<<endl;

    // cout<<ceil(,nums);
    while(l<=h){
        
        int m = (l+h)/2;
        if(ceil(m,nums)<=hrs){
            // cout<<ceil(m,nums)<<"\t";
            cout<<m<<endl;
            ans = m;
            h=m-1;
        }else l=m+1;
        
    }
    
    cout<<ans<<endl;


}