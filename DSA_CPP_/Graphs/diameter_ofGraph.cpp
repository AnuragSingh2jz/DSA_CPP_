#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> edges = {{1,2},
    {1,4},
    {1,5},
    {2,6},
    {2,3},
    {4,6}
};

    int n = 6;
    vector<vector<int>> lst(n+1);
    for(auto& x : edges){
        lst[x[0]].push_back(x[1]);
        lst[x[1]].push_back(x[0]);
    }

    

    






}