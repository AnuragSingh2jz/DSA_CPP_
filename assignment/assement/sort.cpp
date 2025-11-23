#include<iostream>
using namespace std;

int partition(int a[], int l, int h) {
    int pivot = a[l];
    int i = l, j = h;
    while (i < j){
        while (a[i] <= pivot)
            i++;
        while (a[j] > pivot)
            j--;
        if (i < j){
            swap(a[i], a[j]);
        }
    }
    swap(a[j], a[l]);
    return j;
}
void quicksort(int a[],int l,int h){
    if(l<h){
        int m = partition(a,l,h);
        quicksort(a,l,m-1);
        quicksort(a,m+1,h);
    }
}

void display(int a[],int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int main(){
    int branch1[5]={12,32,65,12,87};
    quicksort(branch1,0,4);


    int branch2[5]={32,54,122,89,45};
    quicksort(branch2,0,4);
    


    cout<<"list 1 is sorted"<<endl;
    display(branch1,5);
    cout<<"list 2 is sorted"<<endl;
    display(branch2,5);

    // merge
    int merge[100];
    
    cout<<"both list merge :"<<endl;

    int i=0,j=0,k=0;
    while(i<5 && j<5){
        if(branch1[i]<branch2[j]){
            merge[k++] = branch1[i++];
        }else{
            merge[k++] = branch2[j++];
        }
    }
    while(i<5){
            merge[k++] = branch1[i++];
    }
    while(j<5){
            merge[k++] = branch2[j++];
    }

    for(int i=0;i<10;i++){
        cout<<merge[i]<<"   ";
    }


return 0;

}