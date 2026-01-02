#include<bits/stdc++.h>
using namespace std;
vector<string> dec_to_binery(int x){
    string s="";
    while(x>=1){
        int a = x%2;
        if(a == 1) s='1'+s;
        else s='0'+s;
        x/=2;
    }
    
}
int main (){
    // {11,112,32,134,12,54};
    // {1011,111111,10110,11011,11}

    vector<int> nums = {11,22,32,13,21,54};
    for(int x : nums){

    }


}