#include<iostream>
using namespace std;

int main()
{
    const int a = 10;
    // l-value: the variable which has a memory location or say non-constant variable eg. int a = 10;
    // r-value: const int a = 10;

    // it will show error as we can't change the value of a constant variable;
    a = 20;

    return 0;
}