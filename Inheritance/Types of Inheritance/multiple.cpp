#include<iostream>
using namespace std;

class Vehicle
{
public:
    string name;
    string model;

    Vehicle(string n, string m)
    {
        this->name = n;
        this->model = m;
    }

    void start()
    {
        cout<<"Engine started"<<endl;
    }

    void stop()
    {
        cout<<"Engine stopped"<<endl;
    }

    ~Vehicle()
    {
        cout<<"DTOR vehicle"<<endl;
    }

};

class Feature
{
public:
    string featureName;

    Feature(string f)
    {
        this->featureName = f;
    }

    void feature()
    {
        cout<<"The feature is "<<this->featureName<<endl;
    }

    ~Feature()
    {
        cout<<"DTOR Feature"<<endl;
    }

};

// Inheriting two parent classes two create one;
class Car : public Vehicle,public Feature
{
public:
    int seats;

    Car(string _name, string _model, string _feature, int s) : Vehicle(_name,_model),Feature(_feature)
    {
        cout<<"CTOR Car"<<endl;
        this->seats = s;
    }

    void details()
    {
        cout<<"The car "<<this->name<<" with model number "<<this->model<<" has a feature which is "<<this->featureName<<" with total number of seats "<<this->seats<<endl;
    }

    ~Car()
    {
        cout<<"DTOR Car"<<endl;
    }
};

int main()
{
    Car c("BWM","101","Autopilot",4);

    cout<<"-------------------------------------"<<endl;

    c.start();
    c.feature();
    c.details();
    c.stop();

    cout<<"-------------------------------------"<<endl;

    return 0;
}