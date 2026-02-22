#include<bits/stdc++.h>

using namespace std;
string convert(string s, int n) {
    int size = s.size();
    vector<vector<char>> matrix(n);
    int i  = 0;
    while(i<size){
        for(int down = 0;down<n && i <size;down++){
            matrix[down].push_back(s[i++]);
        }
        for(int up = n -2;up>0 &&i<size;up-- ){
            matrix[up].push_back(s[i++]);
        }
    }
    string result = "";
    for (int row = 0; row < n; row++) {
        for (char ch : matrix[row]) {
            result += ch;
        }
    }
    return result;
}

int main(){
    string s = "paypalishiring";
    cout<<convert(s,3);
    

    return 0;
}