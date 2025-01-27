#if !defined(BIRD_H) // it is used here if we call #include "bird_h" multiple times on client(main.cpp) then this line will not let call this header file multiple times;
#define BIRD_H //To define this header file;

// PROVIDER or 
#include<iostream>
using namespace std;

// interface, an interface is a base class with pure virtual function with no member functions implemented;
class Bird
{
public:
    // Below are two PURE VIRTUAL FUNCTIONS
    virtual void eat() = 0;
    virtual void fly() = 0;
};

class Sparrow : public Bird
{
public:
    void eat() 
    {
        cout<<"Sparrow is eating"<<endl;
    }

    void fly() 
    {
        cout<<"Sparrow is flying"<<endl;
    }
};

class eagle : public Bird
{
public:
    void eat()
    {
        cout<<"Eagle is eating"<<endl;
    }

    void fly()
    {
        cout<<"Eagle is flying"<<endl;
    }
};

class pigeon : public Bird
{
private:

    void eat()
    {
        cout<<"Pigeon is eating"<<endl;
    }

    void fly()
    {
        cout<<"Pigeon is flying"<<endl;
    }

};




#endif //To end it;