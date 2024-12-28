#include<iostream>
using namespace std;

class Student
{

// To access it in the main function or other code;
public:

    // attributes -> property;
    int id;
    int age;
    string name;
    int roll;

    // Constructor or Ctor -> it initialise the object of the class;
    Student()
    {
        cout<<"Student default constructor is called"<<endl;
    }

    // Behavoiurs -> Functions OR Methods
    void study()
    {
        // this is a keyword which is a special pointer which points to the current object that can be invoked inside a member function.
        cout<<this->name<<" is studying"<<endl;
    }

    void sleep()
    {
        cout<<this->name<<" is sleeping"<<endl;
    }

    void bunk()
    {
        cout<<this->name<<" is bunking"<<endl;
    }

    // Destructor or Dtor -> it is automatically called when an object is out of scope or deleted, where Dtor clean up all the resources that the object acquired during its lifetime such as dynamic memory allocation, etc.
    ~Student()
    {
        cout<<this->name<<"'s default destructor is called"<<endl;
    }

};

int main()
{
    // All these object creation is happening over STACK;
    Student s1; //Now, constructor is called as it initialize the object s1;
    s1.id = 1;
    s1.age = 20;
    s1.name = "Sahil";
    s1.roll = 9;

    // Behaviour or member function;
    s1.study();

    Student s2; //Now, another constructor will be called to initialise an object s2;
    s2.id = 2;
    s2.age = 19;
    s2.name = "Ishita";
    s2.roll = 10;

    s2.bunk();
    

    // destructor will be called for both s1 and s2 as main functions is returning 0 and we are getting out of scope;
    return 0; //When the main function returns here, then destructor is called to clean up the resources that object s1 was holding;
}
