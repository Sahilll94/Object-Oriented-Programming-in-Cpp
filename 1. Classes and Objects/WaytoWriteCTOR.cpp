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

    Student(int _id, int _age, string _names, int _roll) : id(_id), age(_age), name(_names), roll(_roll)
    {
        cout<<"Student parameterised Ctor is called"<<endl;
        
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
    Student s1(1,20,"Sahil",9); 
    Student s2(2,19,"Ishita",10);

    cout<<"----------------------"<<endl;

    cout<<"Name of s1 object: "<<s1.name<<" With age "<<s1.age<<endl;

    s1.study();
    s2.sleep();

    cout<<"----------------------"<<endl;


    return 0;    
}
