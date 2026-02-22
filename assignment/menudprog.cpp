#include<iostream>
using namespace std;
int main(){
    int a[100],pos,c,search;
    string option;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    cout<<"enter the one out of five 1.display 2.insert 3.delete 4.search 5.exit   :  >";
    cin>>option;

    if( option =="display"){
        cout<<"element of enterd array is "<<endl;
        for(int i=0;i<5;i++){
            cout<<a[i]<<"\t";
        }

    }
    else if(option=="insert"){
        cout<<"enter the element tou want to enter "<<endl;
        cin>>c;
        cout<<"enter the position "<<endl;
        cin>>pos;
        for(int i=4;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=c;
        for(int i=0;i<6;i++){
            cout<<a[i]<<"\t";
        }
    }
    else if(option=="delete"){
            cout<<"enter the position arry which you want to delete"<<endl;
        cin>>pos;
        for(int i=pos-1;i<5-1;i++){
            a[i]=a[i+1];
        }
        for(int i=0;i<4;i++){
            cout<<a[i]<<"\t";
        }    
    }
    else if(option=="search"){
            cout<<"enter the element you want to search "<<endl;
    cin>>search;
    for(int i=0;i<5;i++){
        if(a[i]==search){
            cout<<"the indexing of "<<search<<" is "<<i<<endl;
            break;
        } 
    
    }
    }
    else if(option=="exit") return 0;

}