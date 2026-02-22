// all the operations of list are same as of vector but the insert op of vec is more complex or costly than list
#include<bits/stdC++.h>

using namespace std;
int main(){
    list<int> lt;
    lt.emplace_front(1);
    lt.emplace_front(2);
    lt.emplace_front(3);
    lt.emplace_front(4);
    lt.emplace_front(5);

    for(list<int>::iterator i = lt.begin();i!=lt.end();i++){
        cout<<*(i)<<endl;
    }



}