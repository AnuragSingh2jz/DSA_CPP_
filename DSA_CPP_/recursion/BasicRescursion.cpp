// when a function call itself until specific condition is made then it is called recursion 
#include<bits/stdC++.h>
using namespace std;
int fun(int n,int i){
    if(n==0) return 0;
    else{
    cout<<n<<endl;
    i++;
    fun(n-1,i);
    cout<<i<<endl; //  here the stack's LIFO mech. will be followed
    }
}

void name(int i,int n){
    if(i>n) return;
    else{
        cout<<"Anurag"<<endl;
    
        name(i+1,n); // do not use post increment <stack overflow>
    }

}

int number(int n,int i){
    if(i>n) return 0;
    else{
        cout<<i<<endl;
        number(n,i+1);
    }
}

int rev(int n){
    if(n==0) return 0;
    else{
        cout<<n<<endl;
        rev(n-1);
    }
}

// print n to 1 by backtracking
int back_tracking1(int i,int n){
    if(i>n) return 0; 
    else{
        back_tracking1(i+1,n);
        cout<<i<<endl;
    }
}

//printing 1 to n but not using i+1 i.e backtraking
int back_tracking2(int i,int n){
    if(i==0) return 0;
    else{
        back_tracking2(i-1,n);
        cout<<i<<endl;
    }
}

void GFG(int N){
    if(N==0) return;
        else{
            GFG(N-1);
            cout<<"GFG"<<endl;
        }
}

int factorial(int n){
    if(n==0) return 1;
    else{
        return n*factorial(n-1);
    }
}

void reverseArray_singlepointer(int a[],int i,int n){
    if(i>=n/2) return;
    else{
        swap(a[i],a[n-i-1]);
        reverseArray_singlepointer(a,i+1,n);
    }
}

void reverseArray_doublepointer(int a[],int l,int h){
    if(l>h) return ;
    else{
        swap(a[l],a[h]);
        reverseArray_doublepointer(a,l+1,h-1);
    }
}

void display(int a[]){
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
}

bool isPalindrome(string &s,int i){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size() - i - 1]) return false;
    else return isPalindrome(s,i+1);
}

int binarySearch(int a[],int l,int h,int s){
    if(l>h) return -1;
    int m = (l+h)/2;
    if(a[m]==s) return m;
    else if(a[m]>s) return binarySearch(a,l,m-1,s);
    else return binarySearch(a,m+1,h,s);
}

int piviot(int a[],int l,int h){
    int i=l,j=h,piviot= a[l];
    while(i<j){
        while(a[i]<piviot) i++;
        while(a[j]>piviot) j--;
        if(i<j) swap(a[i],a[j]);
    }
    swap(a[j],piviot);
    return j;

}

void quickSort(int a[],int l,int h){
    if(l<h){
        int m = piviot(a,l,h);
        quickSort(a,l,m-1);
        quickSort(a,m+1,h);
    }
}

int fibonacci(int n){
    if(n<=1) return n;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

void merge(vector<int> a,int l,int m,int h){
    int left = l;
    int right = h;
    vector<int> temp;
    while(left<=m && right<=h){
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }else {
            temp.push_back(a[right]);
            right++;
        }
    }
    while(left<=m){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=h){
        temp.push_back(a[right]);
        right++;
    }
    for(int i = l;i<=h;i++){
        a[i] = temp[i-l];
    }
}

void Mergesort(vector<int>&a,int l,int h){
    if(l>=h) return;
    else{
        int m=(l+h)/2;
        Mergesort(a,l,m);
        Mergesort(a,m+1,h);
        merge(a,l,m,h);
    }
}

void display_vec(vector<int> &a){
    for(auto i = a.begin();i!=a.end();i++){
        cout<<*(i)<<endl;
    }
}

int main(){
    int a[5]={1,2,3,4,5};
    string s = "12221";
    vector<int>arr = {22,30,4,2,1};
    Mergesort(arr,0,4);
    for(int i = 0;i<=4;i++){
        cout<<arr[i]<<endl;
    }
    // display_vec(arr);

    // for(int i = 0;i<10;i++){
    //     cout<<fibonacci(i)<<endl;
    // }
    // quickSort(unsort,0,4);
    // display(unsort);
    // cout<<binarySearch(a,0,4,4);
    // fun(3,10);
    // name(1,4);
    // number(5,1);
    // rev(10);
    // back_tracking1(1,5);
    // back_tracking2(3,3);
    // GFG(5);
    // cout<<factorial(5);
    // reverseArray_singlepointer(a,0,5);
    // reverseArray_doublepointer(a,0,4);
    // cout<<isPalindrome(s,0);
    // display(a);
    



    


    return 0;
}