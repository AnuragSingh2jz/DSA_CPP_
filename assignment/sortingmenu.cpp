#include<iostream>
#include<utility>
using namespace std;
int main(){
    int a[100],n;
    string method;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    cout<<"insert array element :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the method of sorting :";
    cin>>method;
    if(method=="bubble"){
            for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
     for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<"sorted array by "<<method<<" is :"<<endl;
    }
    else if(method=="selection"){
        for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
            
        }
        if(min!=i){swap(a[i],a[min]);}
        
    }
    cout<<"sorted array by "<<method<<" is :"<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    }
    else if(method=="insertion"){
            for(int i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;

    }
    cout<<"sorted array by "<<method<<" is :"<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    }
    
   
    return 0;



}