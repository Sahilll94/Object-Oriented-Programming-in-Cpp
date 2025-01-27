#include <iostream>
using namespace std;

// Abstraction class means where base class has ATLEAST ONE PURE VIRTUAL FUNCTION and these classes cannot be instantiated (create an instance);
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function

    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    // Animal a;  // Error: Cannot create an instance of an abstract class

    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->sound();  // Dog barks
    animal2->sound();  // Cat meows

    animal1->eat();    // Animal is eating
    animal2->eat();    // Animal is eating

    delete animal1;
    delete animal2;

    return 0;
}
