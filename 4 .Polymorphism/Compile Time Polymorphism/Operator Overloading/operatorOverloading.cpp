#include<iostream>
using namespace std;

class Complex
{
public:
    int real;
    int img;

    // Default Constructor to initialise value the attributes with a default value, in our case it is 0;
    Complex(): real(0),img(0){}

    // Parameterised CTOR
    Complex(int r, int i) : real(r),img(i)
    {
        cout<<this->real<<"'s CTOR is called"<<endl;
    }

    // Addition of two complex numbers;
    Complex operator+ (Complex &obj)
    {
        // as, variable 'c' is expecting a complex value after addition of 'a' and 'b';
        Complex temp;
        // Here, we are storing the addition of a's and b's real attribute into temp as we need to return it to 'c' variable;
        // NOTE: this->real == a.real and obj.real == b.real where left side of + operator is 'a' in the main function and the right side of + operator is 'b' (Complex c = a+b);
        temp.real = this->real + obj.real;
        temp.img = this->img + obj.img;
        return temp;
    }

    Complex operator-(Complex &obj)
    {
        Complex temp;
        // a.real - b.real;
        temp.real = this->real - obj.real;
        temp.img = this->img - obj.img;
        return temp;
    }

    
    Complex operator*(Complex &obj)
    {
        Complex temp;
        // a.real - b.real;
        temp.real = this->real * obj.real;
        temp.img = this->img * obj.img;
        return temp;
    }

    void print()
    {
        cout<<this->real<<" + "<<this->img<<"j"<<endl;
    }

    ~Complex()
    {
        cout<<this->real<<"'s DTOR is called"<<endl;
    }
};


int main()
{
    Complex a(1,2);
    a.print();
    Complex b(3,4);
    b.print();

    Complex c = a+b;
    cout<<"Addition of two complex number: ";
    c.print();

    Complex d = a-b;
    cout<<"Subtraction of two complex number: ";
    d.print();

    Complex e = a*b;
    cout<<"Multiplication of two complex number: ";
    e.print();

    return 0;
}