#include<iostream>
using namespace std;

// Cannot access 'a' variable outside the main function as 'a' variable is local variable for main function and cannot be accessed outside the main function scope;
// a = a+5;

// 'b' is a Global variable;
int b = 10;

int x = 2;

int main()
{
    int a = 5;
    cout<<"a: "<<a<<endl;

    a = a*5;

    cout<<"a*5: "<<a<<endl;

    // Global variable can be accessed anywhere in the program;
    b = b*2;
    cout<<"b: "<<b<<endl;


    x = 40;

    int x = 4;
    cout<<"Local Variable 'x': "<<x<<endl; //Here, which 'x' will be printed? The one who is inside the function or say local variable;

    // to access global variable 'x' ->
    cout<<"Global variable 'x': "<<::x<<endl; //x = 40 will be printed here;


    return 0;
}