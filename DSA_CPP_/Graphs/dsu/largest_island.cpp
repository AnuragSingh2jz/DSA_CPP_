// here we have to return the largest island with converting atmost one 0 from the matrix

#include<bits/stdc++.h>
using namespace std;
bool isValid(int i,int j,int n){
    return i>=0 && j>=0 && i<n && j<n;
}
class dsu{
    public:
    vector<int> size;
    vector<int> parent;

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
    vector<vector<int>> matrix = {
        {1,0},
        {0,1}
    };
    
    int n = matrix.size();
    dsu d(n*n);

    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            
                if(matrix[i][j] == 0) continue;
                int delrow[4] = {0,-1,0,1};
                int delcol[4] = {-1,0,1,0};
                
                for(int k =0;k<4;k++){
                    int row = i+delrow[k];
                    int col = j + delcol[k];
                    if(isValid(row,col,n) && matrix[row][col]){
                        d.unionBySize(i*n+j , row*n+col);
                    }
                }

        }
    }

    // step 2 comparion
    int ans = 0;
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
                if(matrix[i][j] == 1) continue;
                int delrow[4] = {0,-1,0,1};
                int delcol[4] = {-1,0,1,0};
                set<int> component;
                for(int k =0;k<4;k++){
                    int row = i+delrow[k];
                    int col = j + delcol[k];
                    if(isValid(row,col,n)){
                        if(matrix[row][col] == 1){
                            component.insert(d.size[row*n + col]);
                        }
                    }
                }
            int totalZero = 0;
            for(auto x : component){
                totalZero += d.size[x];
            }
            ans  = max(ans , totalZero+1);

        }
    }

    for(int i = 0;i<n*n;i++){
        ans = max(ans , d.size[i]);
    }
    cout<<"max island after the conversion of atmost 0 is = ";
    cout<<ans<<endl;






}