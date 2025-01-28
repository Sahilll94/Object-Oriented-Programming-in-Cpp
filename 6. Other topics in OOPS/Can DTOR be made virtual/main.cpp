#include<iostream>
using namespace std;

class Base
{
    public:

        Base()
        {
            cout<<"CTOR base"<<endl;
        }

        // We have to put virtual here for DTOR of Base class so that compiler can call other classes DTOR too;
        virtual ~Base()
        {
            cout<<"DTOR base"<<endl;
        }
};

class Derived : public Base
{
    public:
        int *x;

        Derived()
        {
            x = new int[1000];
            cout<<"CTOR Derived"<<endl;
        }

        ~Derived()
        {
            delete [] x;
            cout<<"DTOR Derived"<<endl;
        }
};

int main()
{
    Base *b = new Derived();
    delete b;
    return 0;
}