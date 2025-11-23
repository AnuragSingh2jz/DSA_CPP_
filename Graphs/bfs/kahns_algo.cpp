#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> lst = {
        {},
        {},
        {3},
        {1},
        {0,1},
        {2,0}
    };
    size_t n = lst.size();
    vector<int> indegree(n,0);
    for(size_t i = 0;i<lst.size();i++){
        for(int x : lst[i]){
            indegree[x]++;
        }
    }

// know we have to push all the node with indegree 0 in the queue;
    queue<int> q;
    vector<int> topo(n);
    for(size_t i = 0;i<indegree.size();i++){
        if(indegree[i] == 0) q.push(i);
    }


    while(!q.empty()){
        int node = q.front(); q.pop();
        topo.push_back(node);
        for(auto x : lst[node]){
            indegree[x]--;
            if(indegree[x] == 0) q.push(x);
        }
    }
    for(int x : topo){
        cout<<x<<endl;
    }
    return 0;
}