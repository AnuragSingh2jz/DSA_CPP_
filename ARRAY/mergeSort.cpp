// // #include<bits/stdC++.h>
// // using namespace std;

// // void merge(vector<int>&a,int l,int m,int h){
// //     int left = l;
// //     int right = m+1;
// //     vector<int>temp;
// //     while(left<=m && right<= h){
// //         if(a[left]<=a[right]){
// //             temp.push_back(a[left]);
// //             left++;
// //         }
// //         else {
// //             temp.push_back(a[right]);
// //             right++;
// //         }
// //     }
// //     while(left<=m){
// //         temp.push_back(a[left]);
// //         left++;
// //     }
// //     while(right<=h){
// //         temp.push_back(a[right]);
// //         right++;
// //     }

// //     for(int i = l;i<=h;i++){
// //         a[i] = temp[i-l];
// //     }
// // }

// // void MergeSort(vector<int>&a,int l,int h){
// //     if(l>=h) return;
// //     else{
// //         int m=(l+h)/2;
// //         MergeSort(a,l,m);
// //         MergeSort(a,m+1,h);
// //         merge(a,l,m,h);
// //     }
// // }
// // int main(){
// //     vector<int>a = {2,1,5,3,4};
// //     MergeSort(a,0,4);
// //      for(int i = 0;i<=4;i++){
// //         cout<<a[i]<<endl;;
// //     }
// // }

// #include<iostream>
// using namespace std;

// void merge(int a[],int l,int m,int h){
//     int left = l;
//     int right = m+1;
//     int temp[5];
//     int i=0;
//     while(left <= m && right <= h){
//         if(a[left]<=a[right]){
//             temp[i++] = a[left++];
//         }else{
//             temp[i++] = a[right++];
//         }
//     }
//     while(left<=m){
//         temp[i++] = a[left++];
//     }
//     while(right<=h){
//         temp[i++] = a[right++];
//     }
//     for(int i =l;i<=h;i++){
//         a[i] = temp[i-l];
//     }
    
// }
 
// void MergeSort(int a[] ,int l,int h){
//     if(l>=h) return;
//     else{
//         int m = (l+h)/2;
//         MergeSort(a,l,m);
//         MergeSort(a,m+1,h);
//         merge(a,l,m,h);
//     }
// }
// int main(){
//     int a[5] = {5,4,3,1,2};
//     MergeSort(a,0,4);
//     for(int i =0;i<=4;i++){
//         cout<<a[i]<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a[5] ={1,2,3,4,5};
//     int b[5];

//     int n = 4;
//     int x = 5;
//     int j = 0;
//     for(int i =x-n;i<x;i++){
//         b[j++] = a[i]; 
//     }
//     int k=0;
//     for(int i = j ;i<x;i++){
//         b[j++] =a[k++];
//     }


//     for(int i = 0 ;i<x;i++){
//         cout<<b[i]<<endl;
//     }
//     return 0;

// }

//create a book shelf in cpp in which every time you remove a book form middle and display the bookself
// also enter the middle element in a new bookself

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){

//     int a[5] = {1,2,3,4,5};
//     int b[5];
//     int m = 5/2;
//     b[0] = a[m];
    

//     for(int i = m; i<5-1;i++){
//         a[i] = a[i+1];
//     }
//     for(int i = 0;i<4;i++){
//         cout<<a[i]<<endl;
//     }
//     cout<<"new";
//     for(int i = 0;i<1;i++){
//         cout<<b[i]<<endl;
//     }


// }

#include<bits/stdc++.h>
using namespace std;
void merge(int nums[],int l,int m,int h){
    int temp[100];
    int left = l;
    int right = m+1;
    int i =0;
    while(left<=m && right<=h){
        if(nums[left]<=nums[right]) temp[i++] = nums[left++];
        else temp[i++] = nums[right++];
    }
    while(left<=m){
        temp[i++] = nums[left++];
    }
    while(right<=h){
        temp[i++] = nums[right++];
    }
    for(int i = l;i<=h;i++){
        nums[i] = temp[i-l];
    }
}

void sort(int nums[],int l,int h){
    if(l>=h) return;
    else {
        int m = (l+h)/2;
        sort(nums,l,m);
        sort(nums,m+1,h);
        merge(nums,l,m,h);
    }
}
void display(int nums[],int h){
    for(int i=0;i<h;i++){
        cout<<nums[i]<<endl;
    }
}

 int main(){
    int nums[100]={4,1,6,3,7};
    sort(nums,0,4);
    // display(nums,4);
    for(int i=0;i<5;i++){
        cout<<nums[i]<<endl;
    }

 }