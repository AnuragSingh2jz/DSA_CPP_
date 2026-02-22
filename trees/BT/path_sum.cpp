#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
        val = data;
        left = right = nullptr;
    }
};
vector<vector<int>>& res;
class bt{
    public:
    TreeNode* root ;
    bt(){
        root = nullptr;
    }

    void dfs(TreeNode* root,vector<int>& path,int target,int sum){
        if(root == nullptr) return;
        sum+=root->val;
        path.push_back(root->val);
        if(!root->left && !root->right && target == sum){
            res.push_back(path);
        }else{
            dfs(root->left,path,target,sum);
            dfs(root->right,path,target,sum);
        }
        path.pop_back();
    }


    void path(TreeNode* root,int target){
        vector<int> path;
        int sum= 0;
        dfs(root,path,target,sum);
    }


};

int main(){
    


}