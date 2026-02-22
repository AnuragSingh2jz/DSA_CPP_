#include<iostream>
using namespace std;
class circle{
    protected:
    int radius;
    
    public:
    
    circle(int r)
    {
        radius=r;
    }
    int area()
    {
        return 3.14*radius*radius;
    }
};


    class cylinder:public circle{
        int height;
        
        public:
        
        cylinder(int r,int h):circle(r){
            height=h;
        }
        int volume()
        {
            return area()*height;
        }
    };

int main()
{
    circle c1(7);
    cout<<"the area of the circle is "<<c1.area()<<endl;
    cylinder h1(7,10);
    cout<<"the volume of the cylinder is "<<h1.volume()<<endl;
    return 0;
}
