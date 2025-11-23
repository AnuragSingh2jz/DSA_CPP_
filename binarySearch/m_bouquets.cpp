#include<bits/stdc++.h>
using namespace std;
int possible(vector<int>& bloomDay, int k, int day){
    int c = 0;
    int sum=0;
    for(int i =0;i<bloomDay.size();i++){
        if(bloomDay[i]<=day){
            c++;
        }
        else {
            sum+=(c/k);
            c=0;
        }
    }
    sum+=(c/k);
    return sum;
}

int main(){
    //vector<int>& bloomDay, int m, int k
    vector<int> bloomDay = {7, 7, 7, 7, 13, 11, 12, 7};
    int m = 2;
    int k =3;

    // for(int i = 7;i<=13;i++){
    //     if(possible(bloomDay,k,i) == 2){
    //         cout<<i<<endl;
    //         return 0;
    //     }
    // }

    int l = *min_element(bloomDay.begin(),bloomDay.end());
    int h = *max_element(bloomDay.begin(),bloomDay.end());
    int ans = -1;
    while(l<=h){
        int m =(l+h)/2;
        if(possible(bloomDay,k,m) >= 2){
            ans  = m;
            h=m-1;
        }else l=m+1;
    }
    cout<<ans;

}