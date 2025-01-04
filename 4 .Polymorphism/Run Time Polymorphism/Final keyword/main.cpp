#include<iostream>
using namespace std;

// If I write, 'final' then THERE IS NO INHERITANCE ALLOWED. This code will give error as we inherited Circle and Rectangle from Shape;
class Shape final
{
public:
    void draw()
    {
        cout<<"Generic drawing...."<<endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout<<"Circle drawing....."<<endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout<<"Rectangle drawing....."<<endl;
    }
};

int main()
{   
    Circle c;
    c.draw();

    Rectangle r;
    r.draw();

    return 0;
}