#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "flying to moon   ";
    int n = s.size()-1;
    int c = 0;

    while(n>=0){
        if(!isalnum(s[n]) && c==0 ) n--;
        else if(c>0 &&!isalnum(s[n])) break;
        else{
            c++;
            n--;
        }
    }



    

    
    cout<<c<<endl;


    return 0;

}