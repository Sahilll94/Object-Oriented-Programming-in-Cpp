#include<iostream>
using namespace std;

class Base
{
    public:
        int x;

        // No, we can't make the CTOR virtual, as before creating the Virtual table, compiler calls contructor to create the class instance(object) then only Virtual table is created, if there is no virtual table then how will compiler identify the virtual pointer to call.
        virtual Base(int _x) : x(_x) {};

        void print()
        {
            cout<<"x is "<<this->x<<endl;
        }

        ~Base()
        {
            cout<<"DTOR"<<endl;
        }
};

int main()
{
    Base b(20);
    b.print();
    

    return 0;
}