#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> r(256, 0); 
    r['I'] = 1;
    r['V'] = 5;
    r['X'] = 10;
    r['L'] = 50;
    r['C'] = 100;
    r['D'] = 500;
    r['M'] = 1000;

    string s="CMXCVIII";
    int n = s.size();
    int result=0;

   

    for(int i =0;i<n;i++){
        int j =i+1;
        if(j<n && r[s[i]] < r[s[j]]){
            result = result-r[s[i]];
        }else{
            result = result+r[s[i]];
        }
    }

    cout<<result<<endl;
    







    



    return 0;
}