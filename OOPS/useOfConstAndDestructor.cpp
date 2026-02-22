#include<iostream>
using namespace std;
class base{
    private:
    int a;
    public:
    base(int x)
    {
        a=x;
        cout<<"base class is called"<<a<<endl;
    }
    ~base(){
        cout<<"base class constructor has been deleted"<<endl;
    };

};
class derived:public base{
    private:
    int b;
    public:
    derived(int x,int y):base(x)
    {
        b=y;
        cout<<"derived class is called"<<b<<endl;
    }
    ~derived(){
        cout<<"derived class constructor has been deleted "<<endl;
    };
};
int main(){
    derived d1(12,10);
    return 0;
}



