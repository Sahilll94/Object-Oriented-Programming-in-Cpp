#include<iostream>
using namespace std;

class Student
{
public:
    int id;
    int age;
    string name;
    int roll;

    Student(int i, int a, string n, int r)
    {
        cout<<"Parameterised constructor called"<<endl;
        this->id = i;
        this->age = a;
        this->name = n;
        this->roll = r;
    }

    // COPY CTOR constructor;
    Student(const Student &srcobj)
    {
        cout<<"Copy constructor called"<<endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->roll = srcobj.roll;
    }

    void study()
    {
        cout<<this->name<<" is studying"<<endl;
    }

    void sleep()
    {
        cout<<this->name<<" is sleeping"<<endl;
    }


    ~Student()
    {
        cout<<this->name<<"'s Destructor called"<<endl;
    }

};


int main()
{
    Student s1(1,20,"sahil",9);

    cout<<"----------------------"<<endl;

    cout<<"The name of s1 object is "<<s1.name<<" with roll no. "<<s1.roll<<endl;

    Student s2 = s1;

    cout<<"The name of s2 COPY object is "<<s2.name<<" with roll no. "<<s2.roll<<endl;

    cout<<"----------------------"<<endl;




    return 0;
}