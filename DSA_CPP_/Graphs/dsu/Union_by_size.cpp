#include<bits/stdc++.h>
using namespace std;

class dsu{
    vector<int> size;
    vector<int> parent;
    public:

    dsu(int n){
        size.resize(n+1,1);
        parent.resize(n+1);
        for(int i =0;i<=n;i++){
            parent[i] = i;
        }
    }
    
    int findParent(int node){
        if(parent[node] == node) return node;
        return parent[node] =  findParent(parent[node]);
    }

    void unionBySize(int u,int v){
        int ulp_u = findParent(u);
        int ulp_v = findParent(v);
        if(ulp_u == ulp_v) return;
        if(size[ulp_u]>size[ulp_v]){
            parent[ulp_v] = ulp_u;
            size[ulp_u] +=size[ulp_v];
        }else{
            parent[ulp_u] = ulp_v;
            size[ulp_v]+=size[ulp_u];
        }

    }
};


int main(){

    dsu d(7);
    d.unionBySize(1,2);
    d.unionBySize(2,3);
    d.unionBySize(4,5);
    d.unionBySize(6,7);
    d.unionBySize(5,6);
    d.unionBySize(3,7);


}