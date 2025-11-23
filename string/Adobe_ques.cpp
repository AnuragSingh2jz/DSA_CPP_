#include<bits/stdc++.h>
using namespace std;
int ip_range_checker(string s){
    int index = s.find('.');
    string str = s.substr(0,index+1);
    int num = stoi(str);

    if(num<126) return 1;
    else if(num>126 && num <=191) return 2;
    else if(num>191 && num <=223) return 3;
    else if(num>223 && num <=239) return 4;
    else return 5;


    return -1;


}
int main(){
     vector<string> ip = {
        "23.45.67.89",     
        "120.14.56.78",    
        "150.12.34.56",    
        "172.16.5.4",      
        "192.168.1.10",    
        "203.0.113.25",   
        "230.12.45.67",
        "250.1.2.3"        
    };

    
    for(auto &s : ip){
        cout<<ip_range_checker(s)<<endl;
    }

    return 0;
}