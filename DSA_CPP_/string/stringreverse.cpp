#include<bits/stdc++.h>
using namespace std;
bool ispalindrom(string s){
    int i = 0;
    int j = s.size() - 1;
    while(i<j){
        if(!isalnum(s[i])) i++;
        else if(!isalnum(s[j])) j--;
        else if(tolower(s[i])!=tolower(s[j])) return false;
        else {
            i++;
            j--;
        }
    }
    return true;
}
int main(){
    string s = "madam is si madam";
    cout<<ispalindrom(s)<<endl;
}

