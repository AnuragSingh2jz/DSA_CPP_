#include<iostream>
using namespace std;
int partition(int nums[],int l,int h){
    int pivot = nums[l];
    int i = l,j=h;
    while(i<j){
        while(nums[i]<=pivot) i++;
        while(nums[j]>pivot) j--;
        if(i<j) swap(nums[i],nums[j]);
    }
    swap(nums[l],nums[j]);
    return j;
}
void sort(int nums[],int l,int h){
    if(l<=h){
        int m = partition(nums,l,h);
        sort(nums,l,m-1);
        sort(nums,m+1,h);
    }
}
void display(int nums[],int h){
    for(int i=0;i<h;i++){
        cout<<nums[i]<<endl;
    }
}
int main(){
    int nums[100] = {7,3,2,5,1};
    sort(nums,0,4);
    display(nums,5);
    return 0;
}