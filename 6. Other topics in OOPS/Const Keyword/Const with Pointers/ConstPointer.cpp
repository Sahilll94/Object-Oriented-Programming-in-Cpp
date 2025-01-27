#include<iostream>
using namespace std;

// CONST POINTER BUT NON-CONSTANT DATA;
// PUT 'const' AFTER *;
int main()
{
    int * const a = new int (20);
    // value can be changed;
    *a = 40;
    cout<<*a<<endl;

    int b = 10;
    // Pointer cannot be reassigned as it is already constant;
    a = &b; //GIVE ERROR as must be a l-value



    return 0;
}