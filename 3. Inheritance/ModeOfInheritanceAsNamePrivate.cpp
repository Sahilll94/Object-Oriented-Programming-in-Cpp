#include<iostream>
using namespace std;

class Vehicle
{
// Name as private;
private:
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

    string GetName()
    {
        return this->name;
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
    {                                       //Getter used to call private attributes from Vehicle class
        cout<<"The AC has been started for "<<GetName()<<endl;
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

    return 0;
}