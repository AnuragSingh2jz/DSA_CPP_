#include<bits/stdc++.h>
using namespace std;
    bool lemonadeChange(vector<int>& bills) {
        int five = 0,ten = 0;
        for(int i =0;i<bills.size();i++){
            if(bills[i] == 5) five+=1;
            // if(bills[i] == 10) ten+=1;
            if(bills[i] == 10){
                ten+=1;
                if(five>0) five-=1;
                else return false;
            }
            if(bills[i] == 20){
                if(ten>=1 && five>=2){
                    ten-=1;
                    five-=2;
                }
                else if(five>=3) five-=3;
                else return false;
            }
        }


    return true;
    }
int main(){
    vector<int> bills ={5,5,5,10,20};
    cout<<lemonadeChange(bills);
}