#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    cout<<"entr the element of 2d array "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    


    int row=0,col=0;


    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            row+=a[i][j];
        }
        cout<<"row "<<i+1<<"="<<row<<endl;
        row=0;
    }
    cout<<"sum of indivisual coloumn"<<endl;
    

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            col+=a[j][i];
        }
        cout<<"col "<<i+1<<"="<<col<<endl;
        col=0;
    }


    
    

    return 0;
}