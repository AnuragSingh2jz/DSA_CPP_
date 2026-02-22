#include <iostream>
using namespace std;
int main()
{
    int a[100],l,m,h,n,s,temp,j;
    cout<<"Enter the number of element in an array :"<<endl;
    cin>>n;
    cout<<"enter the array element :"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0&&a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout<<"array is sorted "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"enter the element you which you want to search index: ";
    cin>>s;
    l=0;
    h=n-1;
    while(l<=h){
        m=(l+h)/2;
        if(s==a[m]){
            cout<<"Index of "<<s<<" is "<<m<<endl;
            return 0;
        }
        else if(s>a[m]) l=m+1;
        else h=m-1;
    }
    return 0;
}
/*binary search


it's crucial for the array to be sorted before performing a 
binary search. Binary search relies on the array being ordered 
because it repeatedly divides the search interval in half based
 on a comparison with the target value. If the array is not 
sorted, the algorithm cannot guarantee correct results, as it 
might overlook parts of the array or make incorrect assumptions 
about the ordering of elements. So, sorting the array ensures that
 binary search can effectively locate the desired element.*/
