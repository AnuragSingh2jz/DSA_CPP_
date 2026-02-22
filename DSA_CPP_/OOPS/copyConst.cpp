#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breath;
    public:
    rectangle(){
        length=10;
        breath=5;
    }
    rectangle(rectangle &d){
        length=d.length;
        breath=d.breath;
    }
    void area();
};
void rectangle::area(){
    cout<<"area = "<<length*breath<<endl;
};
int main(){
    rectangle r1;
    rectangle r2(r1);
    r2.area();
    r1.area();
}
