#include<iostream>
using namespace std;

class A
{
    int x;

    public:

        A(int _x) : x(_x) {};

        int getX()
        {
            return x;
        }

        void setX(int _x)
        {
            x = _x;
        }

        // It says, class B is class A friend, so that class B can see class A's private member function and attributes;
        friend class B;

};

class B
{
    public:
        void printA(A &a)
        {
            // cout<<a.getX()<<endl;
            // I don't want the above method to use to get class A's attributes value;
            cout<<a.x<<endl;
        }
};

int main()
{
    A a(10);
    B b;
    b.printA(a);

    
    return 0;
}