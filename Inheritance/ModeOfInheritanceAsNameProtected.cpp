#include<iostream>
using namespace std;

class Vehicle
{
// Name as protected;
protected:
    string name;

public:
    string model;
    int tyres;

    // CTOR
    Vehicle(string n, string m, int t)
    {
        cout<<"Vehicle CTOR"<<endl;
        this->name = n;
        this->model = m;
        this->tyres = t;
    }

   

    void startEngine()
    {
        cout<<"The engine has been started for "<<this->name<<endl;
    }

    void stopEngine()
    {
        cout<<"The engine has been stopped for "<<this->name<<endl;
    }

    ~Vehicle()
    {
        cout<<"DTOR of vehicle"<<endl;
    }

};

class Car : public Vehicle
{
public:
    int door;

    Car(string _name, string _model, int _tyres, int doors) : Vehicle(_name,_model,_tyres)
    {
        cout<<"Car CTOR"<<endl;
        this->door = doors;
    }

    void startAC()
    {                                       
        cout<<"The AC has been started for "<<name<<endl;
    }

    ~Car()
    {
        cout<<"DTOR of car"<<endl;
    }
};

int main()
{
    Car c("Maruti","800",4,4);

    c.startEngine();
    c.startAC();
    c.stopEngine();

    Vehicle v("WagonR","100",4);
    // name attribute is inaccessible as it is protected in vehicle which means only it's derived class can inherit it but main can't;
    // v.name;
    
    return 0;
}