#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int a,b=1;
    int c,d=0;
    while(n>0){
        a=n%2;
        b=b*10+a;
        n=n/2;
    }
    while (b != 1){
      c=b % 10;
      d=d*10 +c; 
      b=b/10;
    }
    cout<<d<<endl;

    return 0;
}
