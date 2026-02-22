
////////////////////////////////////////////quick sort

// #include<iostream>
// #include<utility>
// using namespace std;
// int partition(int a[],int l,int h){
//     int piviot=a[l];
//     int i=l,j=h;
//     while(i<j){
//         while(a[i]<=piviot) i++;
//         while(a[j]>piviot) j--;
//         if(i<j){
//             swap(a[i],a[j]);
//         }
//     }
//     swap(a[j],a[l]);
//     return j;
// }
// void quicksort(int a[],int l,int h){
//     if(l<h){
//     int m=partition(a,l,h);
//     quicksort(a,l,m-1);
//     quicksort(a,m+1,h);
//     }
// }
// int main(){
//     int a[100], n;
//     cout << "Enter the value of n: ";
//     cin >> n;
    // cout << "Enter " << n << " integers: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
//     quicksort(a,0,n-1);
//     cout<<"sorted array is :"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<"\t";
//     }
//     return 0;
// }

///////////////////////////////////////insertion sort

// #include<iostream>
// #include<utility>
// using namespace std;
// int main(){
//     int a[100],n;
//     cout<<"enter the number of elements "<<endl;
//     cin>>n;
//         cout << "Enter " << n << " integers: ";
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     for(int i=1;i<n;i++){
//         int temp=a[i],j=i-1;
//         while(j>=0 && a[j]>temp){
//             swap(a[j+1],a[j]);
//             j--;
//         }
//         a[j+1]=temp;
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<"\t";
//     }
// }

////////////////////////////////////////selection sort

// #include<iostream>
// #include<utility>
// using namespace std;
// int main(){
//     int a[100],n;
//     cout<<"enter the number of elements "<<endl;
//     cin>>n;
//         cout << "Enter " << n << " integers: ";
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     for(int i=0;i<n;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             if(a[j]<a[min]){
//                 min=j;
//             }
//         }
//         if(min!=i){
//         swap(a[i],a[min]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<"\t";
//     }
// }   


////////////////////////////////////////bubble sort


// #include<iostream>
// #include<utility>
// using namespace std;
// int main(){
//     int a[100],n;
//     cout<<"enter the number of elements "<<endl;
//     cin>>n;
//         cout << "Enter " << n << " integers: ";
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]>a[j]){
//                 swap(a[i],a[j]);
//             }
//         }
//     } 

//     for(int i=0;i<n;i++){
//         cout<<a[i]<<"\t";
//     }
// }


