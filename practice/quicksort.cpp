#include<iostream>
#include<utility>
using namespace std;
// int partition(int a[],int l,int h){
//     int i=l,j=h,piviot=a[l];
//     while(i<j){
//         while(a[i]<=piviot) i++;
//         while(a[j]>piviot) j--;
//         if(i<j) swap(a[i],a[j]);
//     }
//     swap(a[l],a[j]);
//     return j;

// }
// void quicksort(int a[],int l,int h){
//     if(l<h){
//         int m=partition(a,l,h);
//         quicksort(a,l,m-1);
//         quicksort(a,m+1,h);
//     }
// }
int main(){
    int a[]={3,9,4,1,99};
    // for(int i=1;i<5;i++){
    //     int j=i-1,temp=a[i];
    // while(j>=0 &&a[j]>temp){
    //     a[j+1]=a[j];
    //     j--;
    // }
    // a[j+1]=temp;
    // }
    // quicksort(a,0,4);
    for(int i=0;i<5;i++){
        int min=i;
        for(int j=i+1;j<5;j++){
            if(a[j]<a[min]){
                min=j;
            }

        }
        if(min!=i) swap(a[i],a[min]);
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<"\t";
    }
}
