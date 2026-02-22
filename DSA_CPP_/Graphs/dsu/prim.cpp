#include<bits/stdc++.h>
using namespace std;
typedef pair<int,pair<int,int>> p; // wt , v , u
int main(){

    vector<vector<pair<int,int>>> list = {
        {{1,2},{2,1}},
        {{0,2},{2,1}},
        {{0,1},{1,1},{3,2},{4,2}},
        {{2,2},{4,1}},
        {{2,2},{3,1}}
    };
    int sum = 0;
    int n  = list.size();
    vector<int> visited(n,0);
    vector<pair<int,int>> links;
    priority_queue<p , vector<p> , greater<p> > pq;
    pq.push({0,{0 ,-1}});
    while(!pq.empty()){
        auto it = pq.top(); pq.pop();
        int wt = it.first;
        int v = it.second.first;
        int u = it.second.second;

        if(visited[v]) continue;
        visited[v] = 1;
        sum+=wt;
        if(u!=-1){links.push_back({u,v});}

        for(auto& x : list[v]){
            auto adjIt = x;
            if(!visited[adjIt.first]){
                pq.push({adjIt.second,{adjIt.first,v}});
            }
        }
    }

    cout << "MST Weight: " << sum << endl;
    cout << "Edges in MST:\n";
    for(auto &e : links){
        cout << e.first << " - " << e.second << endl;
    }

    
    return 0;
}