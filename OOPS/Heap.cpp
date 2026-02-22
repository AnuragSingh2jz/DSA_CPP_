#include<iostream>
using namespace std;
class employee{
    string name, designation;
    int age;
    double salary;
    public:
    void input()
    {
        cout<<"enter the name"<<endl;
        cin>>name;
        cout<<"enter the age"<<endl;
        cin>>age;
        cout<<"enter the designation"<<endl;
        cin>>designation;
        cout<<"enter the salary"<<endl;
        cin>>salary;
    }
    void display()
    {
        cout<<"name = "<<name<<"\t";
        cout<<"age = "<<age<<"\t";
        cout<<"designation = "<<designation<<"\t";
        cout<<"salary = "<<salary<<endl;
        
    }
};
int main()
{
    employee *p[2];
    p[2]= new employee[2];   //object is created in heap memory 
    // for object created through pointer we have to write p[2]=&e[2] 
    for(int i=1;i<=2;i++)
    {
        p[i]->input();
        
    }
    
    
    for(int i=1;i<=2;i++)
    {
      p[i]->display();  
    }
    
  
    return 0;
}