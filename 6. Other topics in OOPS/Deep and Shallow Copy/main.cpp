#include<iostream>
using namespace std;

class abc
{
    public: 
        int x;
        int *y;

        abc(int _x, int _y) : x(_x), y(new int (_y)) {}

        // DUMB COPY CONSTRUCTOR WHICH COPIES THE ADDRESS TOO;
        // If you don't create a copy CTOR then compiler itself creates the below copy constructor;

        // abc(const abc &obj)
        // {
        //     x = obj.x;
        //     y = obj.y;
        // }


        // SMART COPY CONSTRUCTOR;
        abc(const abc &obj)
        {
            x = obj.x;
            y = new int (*obj.y);
        }

        void print() const
        {
            cout<<x<<endl;
            cout<<y<<endl; // Address
            cout<<*y<<endl; // Value
        }
};

int main()
{
    abc a(1,2);
    cout<<"Printing 'a' -> \n";
    a.print();

    abc b = a;
    cout<<"Printing 'b' ->\n";
    b.print();

    *b.y = 3;

    

    cout<<"Printing 'b' after using smart copy CTOR -> \n";
    a.print();

    cout<<"Printing 'b' after using smart copy CTOR -> \n";
    b.print();



    return 0;
}