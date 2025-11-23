// #include<bits/stdc++.h>
// using namespace std;
// void display(int a[]){
//     for(int i = 0;i<5;i++){
//         cout<<a[i]<<endl;
//     }
// }
// int main(){
//     int a[5] = {3,2,1,5,4};

//     char x; 
//     cout<<"enter sort tech. you want :"<<endl;
//     cin>>x;
//     switch(x){
//         case 'b' :{
//              for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(a[i]>a[j]){
//                 swap(a[i],a[j]);
//             }
//         }
//     }
//             display(a);
//         }
//         break;
//         case 'i' :{
//             for(int i = 1;i<5;i++){
//                 int temp = a[i],j = i-1;
//                 while(j>=0 && a[j]>=temp){
//                     a[j+1] = a[j];
//                     j--;
//                 }
//                 a[j+1] =temp;
//             }
//             display(a);
//         }
//         break;
//         case 's':{
//             for(int i =0;i<5;i++){
//                 int min  = i;
//                 for(int j = i+1;j<5;j++){
//                     if(a[j]<=a[min]){
//                         min = j;
//                     }
//                 }
//                 swap(a[i],a[min]);
//             }
//             display(a);
//         }
//         break;
//         default: cout<<"enter the value b i s "<<endl;
//     }


// }

//  let say from 1 to 10
#include<iostream>
using namespace std;
int main(){
    // int a[10] = {15,16,17,18,19,20,21,23,24,25}; // 22 is not present
    // int j=0;
    // for(int i = 15 ; i <= 30 ;i++){
    //     if(a[j++] != i){
    //         cout<< i <<" is not present "<<endl;
    //         return 0;
    //     }
    // }

    int a[5] = {10,11,12,14,15}; //agar start 15 s karoge to nahi chal rha :(


    int b[5] = {1,2,3,4,6};

    for(int i= 0;i<5;i++){
        if(i+1!=b[i]){
            int a = i+1;
            cout<<a<<endl;
            break;
        }
    }
    return 0;
}