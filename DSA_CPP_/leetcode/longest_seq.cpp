#include<bits/stdc++.h>
using namespace std;
// implementation of hashset

int main(){
    vector<int> nums = {100,4,200,1,2,3};
    int n = nums.size();
    int maxval = 0;
    int current_count;
    int x;
    unordered_set<int> numset(nums.begin(),nums.end());
    for(int num : numset){
        if(numset.find(num-1) == numset.end()){
            current_count = 1;
            x = num;
            while(numset.find(x+1) != numset.end()){
                x++;
                current_count++;
            }

            maxval = max(maxval,current_count);
        }
    }
    cout<<maxval<<endl;

}