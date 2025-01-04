#include<iostream>
using namespace std;

// THE BELOW CODE DEMONSTRATES THE HIERERCHICAL INHERITANCE EXAMPLE WHERE FROM ONE PARENT CLASS MULTIPLE CHILD CLASS IS BEING DERIVED;
class Vehicle
{
// We don't want the below attributes to expose in the main function but can be used by other derived class, therefore, kept them in protected mode;
protected:
    string name;
    string model;
    int tyres;

// We need to start engine and stop it from the main function, therefore, we kept it as public;
public:

    Vehicle(string n, string m, int t)
    {
        cout<<"CTOR of Vehicle class is called"<<endl;
        this->name = n;
        this->model = m;
        this->tyres = t;
    }

    void startEngine()
    {
        cout<<"Engine is started for "<<this->name<<endl;
    }

    void stopEngine()
    {
        cout<<"Engine has been stopped for "<<this->name<<endl;
    }
    
    ~Vehicle()
    {
        cout<<"DTOR for vehicle class is called"<<endl;
    }

};

// Car is a Vehicle
class Car : public Vehicle
{
// We want to show the number of doors in the car in the main function;
public:
    int doors;
    int years;

    Car(string _name,string _model,int _tyre, int door,int year) : Vehicle(_name,_model,_tyre)
    {
        cout<<"CTOR of Car class is called"<<endl;
        this->doors = door;
        this->years = year;
    }

    void startAC()
    {
        cout<<"AC has been started for "<<this->name<<endl;
    }

    void stopAC()
    {
        cout<<"AC has been stopped for "<<this->name<<endl;
    }

    ~Car()
    {
        cout<<"DTOR for Car class is called"<<endl;
    }

private:
    void yearOfUse()
    {
        cout<<"The car has been used for "<<this->years<<endl;
    }

};

// Bike is a Vehicle
class Bike : public Vehicle
{
private:
    string handlestyle;

// We want to keep hands on clutch or not from main function;
public:
    
    Bike(string _name,string _model,int _tyre, string handle) : Vehicle(_name,_model,_tyre)
    {
        cout<<"CTOR of Bike class is called"<<endl;
        this->handlestyle = handle;
    }

    void clutch()
    {
        cout<<"Hands are on the clutch for "<<this->name<<endl;
    }

    void notClutch()
    {
        cout<<"Hands are not on the clutch for "<<this->name<<endl;
    }

    ~Bike()
    {
        cout<<"DTOR for bike class is called"<<endl;
    }

};


int main()
{
    // For car, all it's working;
    Car c("Baleno","120",4,4,9);

    c.startEngine();
    c.startAC();
    c.stopAC();
    c.stopEngine();

    // If I try to access protected attributes or private member functions then I won't be able to get it;
    // cout<<c.name<<endl;
    // c.yearOfUse();

    // For Bike, all it's working;
    Bike b("Harley","180",4,"classic");

    b.startEngine();
    b.clutch();
    b.notClutch();
    b.stopEngine();

    return 0;
}