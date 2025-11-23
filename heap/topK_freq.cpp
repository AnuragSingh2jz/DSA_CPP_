#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,1,1,2,2,3};

    int k = 2;

    unordered_map<int,int> mapp;
        for(int i = 0;i<nums.size();i++){
            mapp[nums[i]]+=1;
        }

        priority_queue<pair<int,int>> pq;
        for(auto &pair : mapp){
            pq.push({pair.second,pair.first});
        }
        vector<int> temp;

        for(int i =0;i<k;i++){
            pair<int,int> x = pq.top();
            temp.emplace_back(x.second);
            pq.pop();
        }
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<"\t";
        }
}