#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,1,1,2,3,3,3,3,3,3,4};
    unordered_map<int,int> map;
    int n = nums.size();

    for(int i=0;i<n;i++){
        map[nums[i]] +=1;
    }
    for(auto i =map.begin();i!=map.end();i++){
        if(i->second >(n/2)) cout<<i->first<<endl;
    }
    return 0;

}