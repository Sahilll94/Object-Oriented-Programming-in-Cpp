#include<iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;
    
    // Parameterised CTOR;
    // Rectangle(int _length, int _breadth)
    // {
    //     this->length = _length;
    //     this->breadth = _breadth;
    // }

    // Initialisation list CTOR;
    Rectangle(int _length, int _breadth) : length(_length), breadth(_breadth) {}

};


int main()
{
    Rectangle r(1,2);

    cout<<r.length<<endl;



    return 0;
}