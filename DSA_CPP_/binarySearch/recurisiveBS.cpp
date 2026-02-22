#include<bits/stdc++.h>
using namespace std;

int recBS(int a[],int l,int h,int s){
    if(l>h) return -1;
        int m = (l+h)/2;
        if(a[m] == s ) return m;
        else if(a[m] < s) return recBS(a,m+1,h,s);
        else return recBS(a,l,m-1,s);
    
}


int main(){
    int a[10]= {2,3,3,4,5,5,6,6,7,8};
    cout<<recBS(a,0,9,4);

}