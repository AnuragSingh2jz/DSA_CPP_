#include <iostream>
using namespace std;
class employee{
    string name,designation;
    int age;
    double salary;
    public:
    void input();
    void display();
    
    
};
void employee::input()
 {
        cout<<"enter the name of the employee"<<endl;
        cin>>name;
        cout<<"enter the age of the employee"<<endl;
        cin>>age;
        cout<<"enter the designation of the employee"<<endl;
        cin>>designation;
        cout<<"enter the salary of the employee"<<endl;
        cin>>salary;
        
}
void employee::display()
{
        
        cout<<"the name of the employee is "<<name<<"\t";
        cout<<"the age of the employee is "<<age<<"\t";
        cout<<"designation is "<<designation<<"\t";
        cout<<"salary of the employee is "<<salary<<endl;
}
int main()
{
    int i,j,n;
    cout<<"enter the number of employee"<<endl;
    cin>>n;
    employee e[n];
    cout<<"enter the description of employees"<<endl;
    for(i=0;i<n;i++)
    {
        e[i].input();
        
    }
    for(i=0;i<n;i++)
    {
        e[i].display();
        
    }
    return 0;
}
