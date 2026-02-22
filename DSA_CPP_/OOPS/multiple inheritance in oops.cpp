#include<iostream>
using namespace std;
class detail{
    private:
    string name;
    int age;
    public:
    void input1(){
        cout<<"enter the name "<<endl;
        cin>>name;
        cout<<"enter the age"<<endl;
        cin>>age;
    }
    void display1();
};
class detail2{
    private:
    string uid,course;
    public:
    void input2()
    {
        cout<<"enter the uid of the student"<<endl;
        cin>>uid;
        cout<<"enter the course opted"<<endl;
        cin>>course;
    }
    void display2();
    
};
class detail3:public detail,public detail2{
    int roomNo;
    int hostelid;
    public:
    void input3(){
        cout<<"enter the room number "<<endl;
        cin>>roomNo;
        cout<<"enter the hostel id "<<endl;
        cin>>hostelid;
    }
    void display3();
};
    void detail::display1()
    {
        cout<<"name = "<<name<<"\t";
        cout<<"age = "<<age<<"\t";
    }
    void detail2::display2()
    {
        cout<<"uid = "<<uid<<"\t";
        cout<<"course = "<<course<<"\t";
    }
    void detail3::display3()
    {
        cout<<"room number = "<<roomNo<<"\t";
        cout<<"hostelid = "<<hostelid<<endl;
        
    }
int main()
{
    int n;
    cout<<"enter the number of student"<<endl;
    cin>>n;
    detail3 d[n];
    for(int i=0;i<n;i++)
    {
        d[i].input1();
        d[i].input2();
        d[i].input3();
    }
    for(int i=0;i<n;i++)
    {
        d[i].display1();
        d[i].display2();
        d[i].display3();
    }
    
    return 0;
}