#include<iostream>
using namespace std;


// This file is to explain PERFECT ENCAPSULATION and use of getter and setter;


class Student
{

private:
    int age;
    string name;
    int roll;
    string GirlfriendName;

public:

    // CTOR 
    Student(int a, string n, int r, string gf)
    {
        cout<<"Parameterized CTOR is called"<<endl;
        this->age = a;
        this->name = n;
        this->roll = r;
        this->GirlfriendName = gf;
    }

    // Setter to change update the girlfriend name LOL;
    void setGirlfriendName(string newGf)
    {
        // we can add a secure layer of authentication here like the authorize person is updating gf name or somebody else by writing an algorithm to check it;
        this->GirlfriendName = newGf;
    }

    // Getter to return GirlfriendName where getter simply allows you to access the private data but through a function;
    string getGirlfriendName()
    {
        return this->GirlfriendName;
    }

    // Getter to return name;
    string getName()
    {
        return this->name;
    }


    void study()
    {
        cout<<this->name<<" is studying who's girlfriend is "<<this->GirlfriendName<<endl;
    }

    void bunk()
    {
        cout<<this->name<<" is bunking who's girlfriend is "<<this->GirlfriendName<<endl;
    }

    // DTOR
    ~Student()
    {
        cout<<"DTOR is called"<<endl;
    }

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

    // not accessible
    // cout<<s1.age()<<endl; 

    s1.setGirlfriendName("ariana");

    cout<<"New girlfriend of "<<s1.getName()<<" is "<<s1.getGirlfriendName()<<endl;


    cout<<"--------------------------------------------"<<endl;

    return 0;
}