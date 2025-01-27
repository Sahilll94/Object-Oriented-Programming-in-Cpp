#include<iostream>
using namespace std;

// STATIC KEYWORD makes the attributes of the class same for every instances of it;
// Static keyword let all the object (instances) to point at the same memory location;

class abc
{
public:
    static int x,y;

    void print() const
    {
        cout<<"x: "<<x<<" y: "<<y<<endl;
    }

};

// NECESSARY to INITIALISE BOTH THE ATTRIBUTES first;
int abc::x;
int abc::y;

int main()
{
    abc obj1;
    obj1.x = 10;
    obj1.y = 20;
    obj1.print();


    abc obj2;
    obj2.x = 30;
    obj2.y = 40;

    // Now, NOTICE, both will print 30,40 as all objects are pointing at same memory location;
    obj1.print();

    obj2.print();

    return 0;
}