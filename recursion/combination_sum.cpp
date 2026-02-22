#include<bits/stdc++.h>
using namespace std;
void combination(int index , int target , vector<int> &nums , vector<vector<int>> &result , vector<int> &ds){
    if(index == nums.size()){
        if(target == 0) result.push_back(ds);
        return;
    }
    if(nums[index]<=target){
        ds.push_back(nums[index]);
        combination(index,target-nums[index],nums,result,ds);
        ds.pop_back();
    }
    combination(index+1,target,nums,result,ds);
}


int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int target = 7;
    vector<int> ds;
    vector<vector<int>> result;
    combination(0,7,nums,result,ds);
    
for (int i = 0; i < result.size(); i++) {      
    for (int j = 0; j < result[i].size(); j++) { 
        cout << result[i][j] << " ";            
    }
    cout << endl; 
}
    

}