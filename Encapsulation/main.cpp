#include<iostream>
using namespace std;

class Student
{

// Public or accessed attributes;
public:
    int age;
    string name;
    int roll;

// Private or non-accessing attributes;
private:
    // private attribute, which is accessible within the class but not out of the class;
    string GirlfriendName;

// Public or accessed methods/member functions;
public:

    // CTOR or constructor is always within PUBLIC access specifier
    Student(int a, string n, int r, string gf)
    {
        cout<<"Parameterized CTOR is called"<<endl;
        this->age = a;
        this->name = n;
        this->roll = r;
        this->GirlfriendName = gf;
    }


    void study()
    {
        // As this->GirlfriendName is accessible within the class as private members can be access within the class where it was declared;
        cout<<this->name<<" is studying who's girlfriend is "<<this->GirlfriendName<<endl;
    }

    void bunk()
    {
        // As this->GirlfriendName is accessible within the class as private members can be access within the class where it was declared;
        cout<<this->name<<" is bunking who's girlfriend is "<<this->GirlfriendName<<endl;
    }

    // DTOR or destructor is always within PUBLIC access specifier
    ~Student()
    {
        cout<<"DTOR is called"<<endl;
    }

// Private or non-accessed methods/member functions;
private:

    void GfChatting()
    {
        cout<<this->name<<" is chatting with his girlfriend "<<this->GirlfriendName<<endl;
    }

};


int main()
{
    Student s1(10,"Sahil",9,"Lana");

    cout<<"--------------------------------------------"<<endl;


    cout<<"The age of "<<s1.name<<" is "<<s1.age<<endl;

    // WHILE ACCESING GirlfriendName THE BELOW ERROR IS COMING WHICH SAYS PRIVATE ATTRIBUTES IS BEING ACCESSED OUT OF THE CLASS;
    // std::string Student::GirlfriendName
    // private attribute, which is accessible within the class but not out of the class;
    // cout<<s1.GirlfriendName<<endl;

    // public method is being called and also WE ARE HIDING THE IMPLEMENTATION OF STUDY() MEMBER FUNCTION WHICH GIVES A SECURED LAYER THAT THE MAIN FUNCTION DOES NOT KNOW WHAT ALGORITHM OR IMPLEMENTATION WE HAVE USED TO CREATE STUDY() MEMBER FUNCTION;
    s1.study();

    // Private method could not be called;
    // s1.GfChatting();

    cout<<"--------------------------------------------"<<endl;

    return 0;
}