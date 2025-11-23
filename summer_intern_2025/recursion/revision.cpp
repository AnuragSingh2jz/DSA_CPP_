#include<bits/stdc++.h>
using namespace std;
int power(int n,int h){
    if(h==0) return 1;
    else return n*power(n,h-1);
}

void reverse(string &s,int i){
    if(i>=s.size()/2) return;
    else{
        
        swap(s[i],s[s.size()-i-1]);
        reverse(s,i+1);    
    }
}

void revnum(int n){
    if(n<=0)return;
    else{
        revnum(n-1);
        cout<<n<<endl; // swap 20 and 21 line for getting back tracking 
    }
}

int fibbonaci(int n){
    if(n<=1) return 1;
    else return fibbonaci(n-1)+ fibbonaci(n-2);
}

int bs(vector<int> &arr,int k,int l,int h){
    int m = (l+h)/2;
    if(arr[m] == k) return m;
    else if(arr[m]>k) bs(arr,k,l,m-1);
    else bs(arr,k,m+1,h);
}

int factorial(int n){
    if(n<=1) return 1;
    else return n*factorial(n-1);
}

// sort a stack n^2

void insert(stack<int> &stk,int temp){
    if(stk.empty() || stk.top()<=temp){
        stk.push(temp);
        return;
    }
    int val  = stk.top();
    stk.pop();
    insert(stk,temp);
    stk.push(val);
}

void recursive_sort(stack<int> &stk){
    if(stk.size()<=1) return;
    int temp = stk.top();
    stk.pop();
    recursive_sort(stk);
    insert(stk,temp);
}

// delete an element from stack using recursion
void del_rec(stack<int> &stk,int i,int size){
    if(i == size/2) {
        stk.pop();
        return;
    }
    int val = stk.top();
    stk.pop();
    del_rec(stk,i+1,size);
    stk.push(val);

}

void del_insert(stack<int> & stk,int val){
    if(stk.empty()) {
        stk.push(val);
        return;
    }
    int top = stk.top();
    stk.pop();
    del_insert(stk,val);
    stk.push(top);
}

void prime_number(int n){
    for(int i=2;i<=n;i++){
        bool isprime = true;
        for(int j =2;j*j<=i;j++){
            if(i%j == 0) {isprime = false; break;}
        }
        if(isprime) cout<<i<<endl;
    }
}

// tower of hannoi



void reverse_stk(stack<int> & stk){
    if(stk.empty()) return;

    int val = stk.top();
    stk.pop();
    reverse_stk(stk);
    del_insert(stk,val);


    
}

int main(){
    // int x = power(2,10); // power
    // cout<<x<<endl;

    // string  name = "anurag";
    // reverse(name,0);
    // cout<<name<<endl;

    // cout<<fibbonaci(6)<<endl;
    // revnum(10);
    // vector <int> arr = {1,2,3,4,5,6,7,9,10};
    // cout<<bs(arr,7,0,arr.size());

    // cout<<factorial(5);


    // stack<int> stk;
    // stk.push(2);
    // stk.push(0);
    // stk.push(1);
    // stk.push(5);
    // // del_rec(stk,0,stk.size());
    // reverse_stk(stk);

    // // recursive_sort(stk);
    // while(!stk.empty()){
    //     cout<<stk.top()<<endl;
    //     stk.pop();
    // }
    int x = 15%4;
    cout<<x;


    return 0;
}