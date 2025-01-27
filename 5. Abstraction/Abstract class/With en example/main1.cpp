#include<iostream>
#include "bird.h" //To call bird.h header file
using namespace std;

// USER or implementation


void birdDoesSomething(Bird *bird)
{
    // Here, we don't know the specific implementations of eat and fly member functions
    bird->eat();
    bird->fly();
}

int main()
{
    // upcasting -> right one's will be called;
    Bird *bird = new Sparrow;

    birdDoesSomething(bird);

    pigeon *p = new pigeon;
    // p->eat(); HERE, WE CAN'T CALL pigeon member function as it is PRIVATE;

    // Now, I want to call for eagle; here, I won't need to change anything, everything is taken care by the provider .h file
    Bird *b = new eagle;
    birdDoesSomething(b);


    // NOTE IMPORTANT: we can't create an object of an interface (where interface means a base class with pure virtual functions)
    Bird *c = new Bird; //This will give error;

    return 0;
}