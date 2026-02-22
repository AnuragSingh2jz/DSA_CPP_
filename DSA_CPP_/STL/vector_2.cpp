#include<bits/stdC++.h>
using namespace std;
int main(){
    vector<int>v;
    
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);
    v.emplace_back(7);

    v.insert(v.begin()+1,5); // will insert 5 at 1st index 
    /*
    inserting an element in the front using insert is expensive operation 
    so we can use list push_front with less complexity 
    */

    v.pop_back(); // pops out one element from the end

    v.erase(v.begin()+1,v.end()-5); // this will remove the value( 2 ) of vector = {1,2,3,4,5,6,7}

    for(vector<int>::iterator i = v.begin();i!=v.end();i++ ){
        cout<<*(i)<<endl;
    }

    return 0;
}