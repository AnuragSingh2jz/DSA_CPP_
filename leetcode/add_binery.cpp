#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "110";
    string b = "11";

    int j = b.size()-1;
    int i = a.size()-1;
    int c = 0;
    string str = "";

    while(i>=0 || j>=0 || c>=0){
        int sum = c;
        if(i>=0) sum += (a[i--] - '0');
        if(j>=0) sum += (b[j--] - '0');
        str = char((sum%2) +'0') + str;
        c=sum/2;
    }




    return 0;
}