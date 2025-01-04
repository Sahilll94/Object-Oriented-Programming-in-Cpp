#include<iostream>
using namespace std;

// Parent/Base/Super class
class Vehicle
{
public:
    string name;
    string model;
    int noOfTyres;

    // CTOR;
    Vehicle(string n, string m, int no)
    {
        cout<<"CTOR of Vehicle class"<<endl;
        this->name = n;
        this->model = m;
        this->noOfTyres = no;
    }

    void startEngine()
    {
        cout<<"Engine has been started for "<<this->name<<endl;
    }

    void stopEngine()
    {
        cout<<"Engine has been stopped for "<<this->name<<endl;
    }
};

// Derived/Child/Sub class;
// Syntax for derive class -> class DerivedClassName : class ParentClassName {};
class Car : public Vehicle
{
public:
    int noOfDoors;

    // CTOR;
    Car(string _name,string _model,int _noOfTyres, int doors) : Vehicle(_name, _model, _noOfTyres)
    {
        cout<<"CTOR of Car class"<<endl;
        this->noOfDoors = doors;
    }

    void startAC()
    {
        cout<<"AC has been started for "<<this->name<<" with number of doors "<<this->noOfDoors<<endl;
    }

};


int main()
{
    // While in C++, always CTOR of Base class will be called first and then other derived classes CTOR will be called;
    Car c("Baleno","10",4,4);

    // startEngine which is a vehicle property is being used under Car class;
    c.startEngine();
    c.startAC();
    c.stopEngine();

    return 0;
}