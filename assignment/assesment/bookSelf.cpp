#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1[5] = {"book1","book2","book3","book4","book5"};
    string s2[5];
    int l = 0;
    int h = 4;
    int j =0,k=0;
    while(j<2){
        int m = (l+h)/2;
        s2[k++] = s1[m];
        cout<<"self with removed book"<<endl;
        for(int i = m;i<=h;i++){
            s1[i] = s1[i+1];
        }
        for(int  i = 0;i<h-j+1;i++){
            cout<<s1[i]<<"\t";
        }
        h--;
        j++;
        cout<<endl;
    }
    cout<<"shelf 2 "<<endl;
    for(int i = 0;i<2;i++){
        cout<<s2[i]<<"\t";
    }

    return 0;
}