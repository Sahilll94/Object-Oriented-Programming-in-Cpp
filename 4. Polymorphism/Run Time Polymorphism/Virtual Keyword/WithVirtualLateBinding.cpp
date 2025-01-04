#include<iostream>
using namespace std;

// GO ON WithoutVirtual.cpp FILE TO SEE WHAT HAPPENS WHEN VIRTUAL IS NOT THERE.
class Shape
{
public:
    virtual void draw()
    {
        cout<<"Generic drawing....."<<endl;
    }
};

// Circle is a Shape
class Circle : public Shape
{
public:
    //override does nothing you can remove it also, it's just says that base class has a virtual keyword which does late binding where the compiler calls the right method for specific class object;
    void draw() override 
    {
        cout<<"Circle drawing........"<<endl;
    }
};

class Triangle : public Shape
{
public:
    void draw() override
    {
        cout<<"Triangle drawing........"<<endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout<<"Rectangle drawing........"<<endl;
    }
};

// the argument is a pointer 's' pointing at Shape data type variable;
void callDraw(Shape *s)
{
    s->draw(); // draw is polymorphic as it has various functions in different classes.
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