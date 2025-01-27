#include<iostream>
using namespace std;

// CONSTANT DATA BUT NON-CONSTANT POINTER;
// PUT 'const' before *;    
int main()
{
    int const * a = new int(40);
    cout<<*a<<endl;
    // The below code will give an error;
    *a = 30;

    int b = 10;
    // We can reassign the pointer;
    a = &b;
    cout<<*a<<endl;



    return 0;
}