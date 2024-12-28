#include<iostream>
using namespace std;

class Student
{
public:

    int id;
    int age;
    string name;
    int roll;
    int *gpa; //Dynamically allocated memory to GPA

    Student()
    {
        cout<<"Student default constructor is called"<<endl;
    }

    Student(int i, int a, string n, int r, int g)
    {
        cout<<"Parameterised CTOR called"<<endl;
        this->id = i;
        this->age = a;
        this->name = n;
        this->roll = r;
        this->gpa = new int(g); //DMA here;
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
        delete this->gpa; //To free the space in the heap to prevent memory leakage;
    }

};

int main()
{
    Student *s1 = new Student(1,20,"Sahil",9,8);

    cout<<"----------------------"<<endl;


    cout<<"The name of s1 obj is "<<s1->name<<" and age is "<<s1->age<<endl;

    s1->study();
    s1->bunk();

    cout<<"----------------------"<<endl;


    delete s1;
    
    return 0; 
}
