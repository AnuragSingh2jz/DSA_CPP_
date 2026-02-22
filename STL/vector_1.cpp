#include<bits/stdC++.h>
using namespace std;
int main(){
    vector<int> a;
    a.emplace_back(12); // emplace_back is prefered over push_back
    a.emplace_back(2);
    a.emplace_back(1);
    a.emplace_back(33);

    vector<pair<int,int>> v;
    v.emplace_back(1,25); // pushing pairs of element to a vector
    v.emplace_back(11,2);
    v.emplace_back(12,21);

    for(vector<pair<int,int>>::iterator i = v.begin();i!=v.end();i++){
        cout<<i->first<<"\t"<<i->second<<endl;
    }



    // vector<int>::iterator i = a.begin();
    // i++;
    // cout<<*(i);

    // for(vector<int>::iterator i= a.begin();i!=a.end();i++){
    //     cout<<*i<<endl;
    // }









    return 0;
}