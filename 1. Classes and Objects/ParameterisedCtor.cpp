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
        // the below using this keyword sets the attributes with the values that came from the parameter;
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
    Student s1(1,20,"Sahil",9); // over STACK object creation;
    Student s2(2,19,"Ishita",10);

    cout<<"----------------------"<<endl;

    cout<<"Name of s1 object: "<<s1.name<<" With age "<<s1.age<<endl;

    s1.study();
    s2.sleep();

    cout<<"----------------------"<<endl;


    return 0;    
}
