#include<iostream>
using namespace std;

class A
{
    int x;
    
    public:

        A(int _x) : x(_x){};
        int getX()
        {
            return x;
        }

        void setX(int _x)
        {
            x = _x;
        }
        
        friend void print(A &);
};


void print(A &a)
{
    cout<<"Accessing private attribute of class A via friend function: "<<a.x<<endl;
}

int main()
{
    A a(10);

    print(a);

    return 0;
}