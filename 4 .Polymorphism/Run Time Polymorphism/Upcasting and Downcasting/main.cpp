#include<iostream>
using namespace std;


// Upcasting -> Base class pointer wrt to derived class object;
// eg -> Shape *s = new Rectangle;

// Downcasting -> Derived class pointer wrt to base class object;
// eg -> Circle *c = new Shape;

// With virtual keyword in base class, the member function of the object will be called (right part);
// without virtual keyword in base class, the member function of the pointer will be called (left part);

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
    
    void draw()
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

void callDraw(Shape *s)
{
    s->draw();
}

int main()  
{
    // Without virtual, the pointer which is written will be called;
    // shape*a = new Shape(); here, a's draw will be called;

    // With virtual, the actual object's draw is called --  see the below code;

    // dynamically, created a pointer of Shape type
    Shape*s = new Shape();
    s->draw();

    Circle*c = new Circle;
    c->draw();

    // Upcasting -> base with derived;
    Shape*s1 = new Circle();
    s1->draw();

    // Downcasting -> derived with base;
    Shape*s2 = new Shape();
    Circle*c1 = (Circle*)s2; //Typecasting is done here to convert s1 into circle's pointer
    c1->draw();


    return 0;
}