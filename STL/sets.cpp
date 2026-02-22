#include<bits/stdC++.h>
using namespace std;
int main(){

    set<int> st;
    // unordered_set<int> set;

    int a[10]= {1,2,2,3,4,3,4,5,5,3};
    for(int i = 0;i<10;i++){
        st.insert(a[i]);
    }
    int x =st.size();
    cout<<x<<endl;
    // st.erase(st.find(2),st.find(4)); // it takes the itrater staring and ending

    for(auto i = st.begin();i!=st.end();i++){
        cout<<*i<<endl;
    }
    

// code to find wheather the set is present inside the set or not
    set<int>::iterator find =st.find(0);
    if(find!= st.end()){
    cout<<*(find)<<endl;
    }else{
        cout<<"the element is not in the set";
    }



    return 0;
}