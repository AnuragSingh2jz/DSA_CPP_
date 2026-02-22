#include<iostream>
using namespace std;
class rectangle{
    private:
    int l,b;
    public:
    int area(int l,int b);
    
};
int rectangle::area(int l,int b)
{
    return l*b;
}
int main()
{
    int length,breathe;
    cout<<"enter the length and breathe "<<endl;
    cin>>length>>breathe;
    rectangle r1;
    cout<<"the area of the rectangle is "<<r1.area(length,breathe)<<endl;
    return 0;
}