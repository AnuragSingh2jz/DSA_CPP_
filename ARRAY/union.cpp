#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums1 = {1,1,3,4,4,5};
    vector<int> nums2 = {2,3,4,4,5};
    vector<int> temp;
    // find union
    int n1 = nums1.size();
    int n2 = nums2.size();
    int i=0,j=0;
    while(i!=n1 && j!=n2){
        if(nums1[i] != nums2[j]) temp.push_back(nums1[i++]);
        if(nums1[i] == nums2[j]) {
            temp.push_back(nums1[i++]);
            j++;
        }
        // if(nums1[i] == nums1[i-1]) i++;
        // if(nums1[j] == nums1[j-1]) j++;

    }



    for(int i =0;i<temp.size();i++){
        cout<<temp[i]<<endl;
    }
    
}