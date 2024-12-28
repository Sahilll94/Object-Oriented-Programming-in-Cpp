#include<iostream>
using namespace std;


class Student
{
public:
    int age;
    string name;
    int *gpa;

    Student(int a, string n, int g)
    {
        cout<<"Constructor called"<<endl;

        this->age = a;
        this->name = n;
        this->gpa = new int(g); //Heap memory allocation to pointer gpa;
    }

    Student(const Student &srcobj)
    {
        cout<<"Copy constructor called"<<endl;

        this->age = srcobj.age;
        this->name = srcobj.name;
        this->gpa = new int (*srcobj.gpa);
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
        cout<<"Destruction called"<<endl;
        delete gpa; //Delete gpa otherwise it will lead to memory leakage; HERE WE NEED DTOR;
    }

};

int main()
{
    Student *s1 = new Student(20,"sahil",8);

    cout<<"----------------------"<<endl;


    cout<<"name of s1 is "<<s1->name<<" with gpa "<<*(s1->gpa)<<endl;

    Student s2 (19,"Ishita",9);

    cout<<"name of s1 is "<<s2.name<<" with gpa "<<*(s2.gpa)<<endl;

    Student s3(s2);
    
    cout<<"name of s1 is "<<s3.name<<" with gpa "<<*(s3.gpa)<<endl;

    cout<<"----------------------"<<endl;

    delete s1;




    return 0;
    
}