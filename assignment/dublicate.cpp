#include<iostream>
using namespace std;
int main(){
    int a[100],c=0;
    cout<<"enter the array "<<endl;
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
        for(int i=1;i<7;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout<<"the element with more than one quantity"<<endl;
    for(int i=0;i<7;i++){
        for(int j=i;j<7;j++){
            if(a[i]==a[j]) c++;

        }
        if(c>=2){
            cout<<a[i]<<"\t"<<"quantity = "<<c<<endl;
          i=i+c-1;  
        }
        c=0;

    }
   
    return 0;
}
