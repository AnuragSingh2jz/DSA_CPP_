#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<char> letters = {'c','f','j'};
    char k ='g';
    int l = 0;
    int h = letters.size()-1;
    char ans = letters[0];
    while(l<=h){
        int m = (l+h)/2;
        if(int(letters[m]) > int(k)){
            ans = letters[m];
            h=m-1;

        }else l=m+1;
    }
    cout<<ans<<endl;



}