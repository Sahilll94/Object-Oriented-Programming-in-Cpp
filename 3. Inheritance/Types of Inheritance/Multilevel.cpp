#include<iostream>
using namespace std;

// THIS CODE DEMONSTRATES MULTILEVEL INHERITANCE WHERE THERE IS A PARENT CLASS FROM WHERE A BASE CLASS CREATED THEN FROM THAT ONE MORE BASE CLASS CREATED;
class Vehicle
{
protected: 
    string name;
    string model;

public:

    Vehicle(string n, string m) : name(n), model(m)
    {
        cout<<"CTOR vehicle"<<endl;
    }

    void start()
    {
        cout<<"Engine has been started"<<endl;
    }

    void stop()
    {
        cout<<"Engine has been stopped"<<endl;
    }

    ~Vehicle()
    {
        cout<<"DTOR vehicle"<<endl;
    }

};


class Car : public Vehicle
{
protected:
    int doors;

public:
    Car(string name, string model, int door) : Vehicle(name,model)
    {
        cout<<"CTOR Car"<<endl;
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
        cout<<"DTOR Car"<<endl;
    }

};

class Sportscar : public Car
{
protected:
    int topspeed;

public:
    Sportscar(string _name, string _model, int _doors, int speed) : Car(_name, _model, _doors) //TAKE A LOOK AT IT
    {
        cout<<"CTOR sportscar"<<endl;
        this->topspeed = speed;
    }

    void speed()
    {
        cout<<"The top speed of "<<this->name<<" is "<<this->topspeed<<endl;
    }
    
};

int main()
{
    Sportscar s("BMW","101",2,1000);

    cout<<"-------------------------------------------------------"<<endl;

    s.start();
    s.startAC();
    s.speed();
    s.stopAC();
    s.stop();

    cout<<"-------------------------------------------------------"<<endl;

    return 0;
}