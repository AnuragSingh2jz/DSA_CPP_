#include<bits/stdc++.h>
using namespace std;
class Disjointset{
    vector<int> parent,rank;
    public:
    Disjointset(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i = 0;i<=n;i++){
            parent[i]=i;
        }
    }
    int FindUnionPair(int node){
        if(parent[node] == node) return node;
        return parent[node] = FindUnionPair(parent[node]);
    }

    void UnionByRank(int u,int  v){
        int ulp_u = FindUnionPair(u);
        int ulp_v = FindUnionPair(v);
        if(ulp_u == ulp_v) return ;
        if(rank[ulp_u ]< rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }else if(rank[ulp_u] > rank[ulp_v]){
            parent[ulp_v] = ulp_u;
        }else{
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

};


int main(){
    Disjointset d(7);
    d.UnionByRank(1,2);
    d.UnionByRank(2,3);
    d.UnionByRank(4,5);
    d.UnionByRank(6,7);
    d.UnionByRank(5,6);
    d.UnionByRank(3,7);



    return 0;
}