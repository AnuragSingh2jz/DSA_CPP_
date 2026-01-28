#include<bits/stdc++.h>
using namespace std;
typedef pair<long ,int> p;

int main(){
    int n = 6;
    int max = 1e9 + 7;
    vector<vector<p>> list= {
    /* 0 */ {{6,7}, {1,2}, {4,5}},
    /* 1 */ {{0,2}, {2,3}, {3,3}},
    /* 2 */ {{1,3}, {5,1}},
    /* 3 */ {{1,3}, {6,3}, {5,1}},
    /* 4 */ {{0,5}, {6,2}},
    /* 5 */ {{3,1}, {6,1}, {2,1}},
    /* 6 */ {{0,7}, {3,3}, {5,1}, {4,2}}
    };

 
        priority_queue<p,vector<p>,greater<p>> pq;
        vector<long long> ways(n,0);
        vector<long long> dist(n,LLONG_MAX);

        pq.push({0,0});
        ways[0] = 1;
        dist[0] = 0;
        while(!pq.empty()){
            long long dt = pq.top().first;
            int node = pq.top().second; 
            pq.pop();
            if(dt> dist[node]) continue;
            for(auto & adj : list[node]){

                int adjnode = adj.first;
                long long wt = adj.second;
                if(dt + wt < dist[adjnode]){
                    dist[adjnode] = dt+wt;
                    pq.push({dt+wt,adjnode});
                    ways[adjnode] = ways[node] % max;
                }
                else if(dt + wt == dist[adjnode]){
                    ways[adjnode] = (ways[node] + ways[adjnode]) % max;
                }
            }
        }
    cout<<ways[n-1]<<endl;


    return 0;
}