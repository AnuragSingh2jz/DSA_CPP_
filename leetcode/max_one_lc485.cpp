#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[7] ={1,1,1,1,0,1,1};

    int i = 0;
    int j = 0;
    int c = 0;
    int max = 0;
    while(j<7){
        if(nums[j]!=0 && nums[i] !=0){
            j++;
            c++;
        if(max<c) max = c;
            
            
        }else if(nums[j]==0){
            i=j+1;
            j=i;
            c=0;
        }
    }
    cout<<max<<endl;
}