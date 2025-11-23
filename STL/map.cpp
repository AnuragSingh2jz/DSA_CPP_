#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> map;
    map.insert({1,2});
    map.insert({2,2});
    map.insert({3,2});
    map.insert({4,20});

    // cout<<map[4]<<endl;
   
    map.erase(2);  // to erase any key and its value 

    for(auto i = map.begin();i!=map.end();i++){
        cout<<i->first<<"\t"<<i->second<<endl;
    } 
    
/* {
        {1,3},
        {3,2},
        {4,20}
    }

*/





    return 0;
}