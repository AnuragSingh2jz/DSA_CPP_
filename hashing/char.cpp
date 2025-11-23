#include<bits/stdc++.h>
using namespace std;
// 97 - 122
int main(){
   string  s ={"abbacdd"};

    int hashh[256] ={0};

    for(int i = 0; i<s.size();i++){
        hashh[s[i]] +=1;
    }

    char n;
    cout<<"enter the character :";
    cin>>n;
    
    
    cout<<hashh[n]<<endl;


    return 0;
}