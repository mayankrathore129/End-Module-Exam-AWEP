#include<iostream>
using namespace std;
class a
{
int a;
public:
void f1()
{
    cout<<"In base class";
}
virtual void f2()=0;
};
class b : public a
{
    int b;
    public:
    void f1()
    {
        cout<<" method inside drive";
    }
    void f2()
    {
        cout<<"virtual method of drive class";
    }
   
};


int main()
{
    b obj;
    a *ptr;

    ptr = &obj;
    ptr -> f2();
     // ptr -> f3();
    //ptr -> f1();
    return 0;
};

