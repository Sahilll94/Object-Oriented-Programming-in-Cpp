#include<iostream>
using namespace std;

class Student
{

public:

    int id;
    int age;
    string name;
    int roll;

    Student()
    {
        cout<<"Student default constructor is called"<<endl;
    }

    Student(int i, int a, string n, int r)
    {
        cout<<"Parameterised CTOR called"<<endl;
        this->id = i;
        this->age = a;
        this->name = n;
        this->roll = r;
    }

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

    ~Student()
    {
        cout<<this->name<<"'s default destructor is called"<<endl;
    }

};

// Simply, s1 is a pointer object right now, we need to use '->' to access the value and we need to use new and delete keyword of DMA to provide and clear Heap memory;
int main()
{
    // Creating object over HEAP using Dynamic Memory allocation;
    Student *s1 = new Student(1,20,"Sahil",9);

    cout<<"The name of s1 obj is "<<s1->name<<" and age is "<<s1->age<<endl;

    s1->study();
    s1->bunk();

    delete s1; //To call Dtor or destructor we use delete.
    
    return 0; 
}
