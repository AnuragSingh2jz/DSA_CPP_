/*Define a base class Vehicle with private data members brand and model. Provide accessor and mutator functions for both brand and model.
Derive a class Car from Vehicle with an additional private data member numDoors. Implement accessor and mutator functions for the numDoors
attribute*/
#include<iostream>
using namespace std;
class vehicle{
    private:
    string brand;
    int model;
    public:
    void setbrand(string b){
        brand=b;
    }
    void setmodel(int m)
    {
        model=m;
    }
    string getbrand() const
    {
        return brand;
    }
    int getmodel()const
    {
        return model;
    }
    
};
class car:public vehicle{
    int door;
    public:
    void setdoor(int d)
    {
        door=d;
    }
    int getdoor()const
    {
        return door;
    }
    void display()
    {
        cout<<"brand ="<<getbrand()<<endl;
        cout<<"model ="<<getmodel()<<endl;
        cout<<"number of door"<<getdoor()<<endl;
    }
};
int main()
{
    string b;
    int m,d;
    car c[2];
    for(int i=0;i<2;i++)
    {
        cout << "Enter brand, model number, number of doors: " << endl;
    cin >> b >> m >> d;
    c[i].setbrand(b);
    c[i].setmodel(m);
    c[i].setdoor(d);
    }
    for(int i=0;i<2;i++)
    {
        cout<<i+1<<" ";
    c[i].display();
    
    }
    
    
    return 0;
    
    
}
    
    