#include<bits/stdc++.h>
using namespace std;
vector<string> dec_to_binery(vector<int> &nums){
    vector<string> res;
    for(int x : nums){
        string s="";
        while(x>=1){
            int a = x%2;
            if(a == 1) s='1'+s;
            else s='0'+s;
            x/=2;
        }
        res.push_back(s);
    }
    return res;
}
int main (){
    // {11,112,32,134,12,54};
    // {1011,111111,10110,11011,11}

    vector<int> nums = {11,22,32,13,21,54};
    
    vector<string> res = dec_to_binery(nums);
    unordered_map<int,int> mp;
    vector<int> highBit;
    for(auto s : res){
       int c = 0;
       for(int i = 0;i<s.size();i++){
            if(s[i] == '1') c++;
       } 
       highBit.push_back(c);
    }
    for(int i = 0;i<nums.size();i++){
        mp[highBit[i]] = nums[i];
    }

    priority_queue<pair<int,int>> pq;

    for(auto m : mp){
        pq.push({m.first,m.second});
    }
    int k = 3;
    while(k-->0){
        int x = pq.top().second;
        cout<<x<<endl;
        pq.pop();
    }



}