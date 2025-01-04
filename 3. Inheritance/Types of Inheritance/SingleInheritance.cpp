#include<iostream>
using namespace std;


// DEMONSTRATION OF SINGLE INHERITANCE;

class Vehicle
{
protected:
    string name;
    string model;

    Vehicle(string n, string m) : name(n), model(m)
    {
        cout<<"CTOR of vehicle called"<<endl;
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

class truck : public Vehicle
{
public:
    int loads;

    truck(string _name, string _model, int _loads) : Vehicle (_name, _model)
    {
        cout<<"CTOR of truck called"<<endl;
        this->loads = _loads;
    }

    void setName(string newName)
    {
        this->name = newName;
    }

    string getName()
    {
        return name;
    }

    void loaded()
    {
        cout<<"The loads have been loaded over the truck named as "<<this->name<<endl;
    }

    void unloaded()
    {
        cout<<"The loads have been unloaded over the truck named as "<<this->name<<endl;
    }

};


int main()
{
    truck t("tractor","101",20);

    cout<<"-------------------------------------------------------"<<endl;

    cout<<"The name of the truck is "<<t.getName()<<endl;

    t.setName("tow truck");

    cout<<"The new name of the truck is "<<t.getName()<<endl;

    cout<<"-------------------------------------------------------"<<endl;

    return 0;
}