#include<iostream>
using namespace std;

class abc
{
    public:
        static int x,y;

        static void print()
        {
            cout<<x<<" "<<y<<endl;
        }
};

int abc::x = 10;
int abc::y = 20;

int main()
{
    abc obj1;
    obj1.x = 9;
    obj1.y = 12;

    abc obj2;
    obj2.x = 4;
    obj2.y = 5;
    abc::print();

    return 0;
}