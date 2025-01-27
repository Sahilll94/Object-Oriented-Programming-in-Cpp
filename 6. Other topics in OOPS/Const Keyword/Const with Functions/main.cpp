#include<iostream>
using namespace std;

class Demo
{
private:
    int varA;
    int varB;


public:

    // Constructor;
    Demo(int _a, int _b)
    {
        this->varA = _a;
        this->varB = _b;
    }

    void hi()
    {
        cout<<"Hello I am Demo class"<<endl;
    }

    void setvarA(int a) 
    {
        this->varA = a;
    }

    void setvarB(int b) const //If I keep const here, then we won't be able to modify the attributes of this class;
    {
        this->varB = b;
    }

    int getvarA () const //We can't modify the attributes of this class;
    {
        return varA;
    }

    int getvarB()
    {
        return varB;
    }

    ~Demo()
    {
        cout<<"DTOR"<<endl;
    }
};

int main()
{
    Demo k(1,2);
    


    return 0;
}