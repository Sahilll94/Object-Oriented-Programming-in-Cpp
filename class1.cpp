#include<iostream>
using namespace std;

class Student
{
// access it in main function
public:

    //attributes
    int id;
    int age;
    string name;
    int roll;

    // Ctor;
    Student()
    {
        cout<<"Student default constructor is called"<<endl;
    }

    // Member functions
    void study()
    {
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

    // Dtor;
    ~Student()
    {
        cout<<this->name<<"'s default destructor is called"<<endl;
    }

};

int main()
{
    Student s1; 
    s1.id = 1;
    s1.age = 20;
    s1.name = "Sahil";
    s1.roll = 9;

    s1.study();

    Student s2; 
    s2.id = 2;
    s2.age = 19;
    s2.name = "Ishita";
    s2.roll = 10;

    s2.bunk();



    return 0;    
}
