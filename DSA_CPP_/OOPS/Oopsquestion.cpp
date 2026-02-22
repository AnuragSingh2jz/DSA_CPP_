/*Write a probram with a mother class animal. Inside it define a name and an age variables,
and set_value() function.Then create two bases variables Zebra and Dolphin
which write a message telling the age, the name and giving some extra information (e.g. place of origin)*/
#include<iostream>
using namespace std;
class animal{
    protected:
    string name;
    int age;
    public:
    void set_name(string n)
    {
        name=n;
    }
    void set_age(int a){
        age=a;
    }
    
};
class zebra:public animal{
    string place_of_origin;
    public:
    void set_place_of_origin(string p)
    {
        place_of_origin=p;
    }
    void display1(){
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"place of origin = "<<place_of_origin<<endl;
    }
};
class dolphin:public animal{
    string place_of_origin;
    public:
    void set_place_of_origin(string p2)
    {
        place_of_origin=p2;
    }
    void display2(){
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"place of origin = "<<place_of_origin<<endl;
    }
    
};
int main()
{
    string p,p2,n;
    int a;
    cout<<"enter the name of the animal , age and place of orign or orign 2"<<endl;
    cin>>n>>a>>p>>p2;
    
    zebra z;
    z.set_name(n);
    z.set_age(a);
    z.set_place_of_origin(p);
    z.display1();
    
    dolphin d;
    d.set_name(n);
    d.set_age(a);
    d.set_place_of_origin(p2);
    d.display2();
    
    
    return 0;
}
