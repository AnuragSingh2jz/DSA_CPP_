#include <iostream>

using namespace std;
class factorial{
    int n;
    public:
    factorial(int x)
    {
        n=x;
        
    }
    int process()
    {
        int y=1;
        for(int i=1;i<=n;i++)
        {
            y*=i;
        }
        return y;
    }
};
int main()
{
    int x;
    cout<<"enter the number of which you want factorial"<<endl;
    cin>>x;
    factorial f1(x);
    cout<<"the factorial is "<<f1.process()<<endl;
    return 0;
}
