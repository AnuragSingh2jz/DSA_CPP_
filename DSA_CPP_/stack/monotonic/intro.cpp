#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> nums = {2,4,1,5,7,4};

    stack<int> stk;

    for(int i =0;i<nums.size();i++){
        
        while(!stk.empty() && stk.top() > nums[i]) stk.pop();
        stk.push(nums[i]);



    }

    while(!stk.empty()){
        cout<<stk.top()<<endl;
        stk.pop();
    }





    return 0;
}