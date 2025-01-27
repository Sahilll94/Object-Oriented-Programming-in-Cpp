#include<iostream>
using namespace std;

// BOTH POINTER AND DATA AS A CONST;
// PUT 'const' BEFORE AND AFTER *
int main()
{
    int const * const a = new int(20);

    // Below will give error;
    *a = 40;

    int b = 10;
    // Below will give error;
    a = &b;





    return 0;
}