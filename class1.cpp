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

    // parameterised Ctor;
    Student(int id, int age, string names, int roll)
    {
        cout<<"Student parameterised Ctor is called"<<endl;
        this->id = id;
        this->age = age;
        this->name = names; //nameS, s is there extra;
        this->roll = roll;
        
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
    // Parameterised way
    Student s1(1,20,"Sahil",9);

    return 0;    
}
