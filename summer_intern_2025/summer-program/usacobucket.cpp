#include<bits/stdc++.h>
using namespace std;

int main(){

vector<vector<int>> bucket = {
    {4,10,1},
    {8,13,3},
    {2,6,2}
};
int time_bucket[1001] = {0};
int n = bucket[0].size();
for(auto &i : bucket){
    int s = i[0];
    int e = i[1];
    int x= i[2];

    for(int  time = s;time<=e;time++){
        time_bucket[time]+=x;
    }
}
int maxval =0;
for(auto &i : time_bucket){
    maxval = max(maxval,i);
}
cout<<maxval;



return  0;

}