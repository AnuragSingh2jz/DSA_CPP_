#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int , int >variable= {1,2}; // pair is used to store two variable in one variable
    cout<<variable.first<<"\t"<<variable.second<<endl;

    pair<int ,pair<int,int>>x={1,{2,3}}; //nested pair
    cout<<x.first<<endl;
    cout<<x.second.first<<endl;


    pair<int,int>a[]={{0,1},{2,3},{4,5},{6,7}};
    cout<<a[3].first<<endl;

    for(int i=0;i<4;i++){
        cout<<a[i].first<<"\t"<<a[i].second<<endl;
    }




    return 0;
}

