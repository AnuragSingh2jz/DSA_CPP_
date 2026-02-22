#include<bits/stdc++.h>
using namespace std;

// question is add a number

int main(){
    string n1 = "123";
    string n2 = "99";
    string res ;
   
    int i = n1.size()-1;
    int j = n2.size()-1;

    int c = 0,sum;
    while(i>=0 || j>=0 || c>0){
        sum = 0;
        int x = (i>=0) ? n1[i]-'0':0;
        int y = (j>=0) ? n2[j] - '0': 0;
        sum = (x+y+c);
        c = sum/10;
        res.push_back((sum%10)+'0');
        i--;
        j--;
    }
    reverse(res.begin(),res.end());

    for(auto &i:res){
        cout<<i;
    }
    return 0;
}