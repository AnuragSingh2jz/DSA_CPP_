#include<iostream>
using namespace std;
int main(){
    int a[100];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
   
    int max=a[0];

    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }

    }
    cout<<"largest amoung the element is "<<max<<endl;
return 0;
}