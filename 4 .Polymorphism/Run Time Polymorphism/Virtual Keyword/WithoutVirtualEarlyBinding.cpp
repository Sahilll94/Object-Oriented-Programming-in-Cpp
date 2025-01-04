#include<iostream>
using namespace std;

class Shape
{
public:
    void draw()
    {
        cout<<"Generic drawing....."<<endl;
    }
};

// Circle is a Shape
class Circle : public Shape
{
public:
    // You can't write override here, as there is no virtual keyword for draw method in the base class;
    void draw() //override
    {
        cout<<"Circle drawing........"<<endl;
    }
};

class Triangle : public Shape
{
public:
    void draw()
    {
        cout<<"Triangle drawing........"<<endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout<<"Rectangle drawing........"<<endl;
    }
};

// the argument is a pointer 's' pointing at Shape data type variable;
void callDraw(Shape *s)
{
    s->draw();
}

int main()
{
    Circle c;
    // I have passed the address of 'c' to pointer 's' but I want to print Circle's draw method not Shape draw method;
    // Now, I can't just go create callDraw function for each class like for Circle then for Triangle etc;
    // For that, we will use VIRTUAL keyword which tells the compiler to no do EARLY binding (early binding means determining which function to call at COMPILE time where draw method of Shape function was determined) but LATE binding(we will check which class's method to call at RUNTIME) is done via virtual keyword.
    callDraw(&c);

    Rectangle r;
    callDraw(&r);
    
    // Over heap;
    Triangle *t = new Triangle;
    callDraw(t);

    return 0;
}