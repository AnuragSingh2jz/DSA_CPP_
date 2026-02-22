#include<iostream>
#include<utility>
using namespace std;
int main(){
    int a[100],n;
    cout<<"enter the number of element in array ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
            
        }
        if(min!=i){swap(a[i],a[min]);}
        
    }
    cout<<"Sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }






    return 0;
}