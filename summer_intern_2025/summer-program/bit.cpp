#include<bits/stdc++.h>

using namespace std;

void into_binery_1(int num){
    string s = "";
    
    while(num!=0){
        s =  (char)('0'+num%2) + s;
        num/=2;
        
    }
    int n = 8-s.size();
    for(int i=0;i<n;i++){
        s = '0'+s;
    }
    cout<<s<<endl;
}

// 2's compliment for 8 bit
void into_binery_2(int num){
    num = abs(num);
    // conversion from decimal to binery
    string s = "";

    while(num!=0){
        s =  (char)('0'+num%2) + s;
        num/=2;
        
    }


    int n = 8-s.size();
    for(int i=0;i<n;i++){
        s = '0'+s;
    }

    // 1's compliment
    for(int i = 0;i<8;i++){
        if(s[i] == '0') s[i] = '1';
        else s[i] ='0';
    }
    // 2's compliment
    
    char carry = '1';
    for(int i = s.size()-1;i>=0;i--){
        if(s[i] == '1' && carry == '1') {
            s[i] ='0'; 
            carry = '1';
        }else if(s[i] == '0' && carry == '1'){
            s[i] = '1';
            carry = '0';
            break;
        }else {
            break;
        }
        
    }
    if(s.size()>=8 && carry == '1'){
        cout<<"buffer overflow"<<endl; 
    }
    else if(carry == '1' && s.size()<8) s = '1'+s;
    cout<<s<<endl;
}

int main(){

    int n ;
    cout<<"enter the number :"<<endl;
    cin>>n;

    if(n>0) into_binery_1(n);
    else if(n<0) into_binery_2(n);
    else cout<<"0";
    

}