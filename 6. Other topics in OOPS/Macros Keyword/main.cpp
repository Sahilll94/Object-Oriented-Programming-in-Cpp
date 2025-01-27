#include<iostream>
using namespace std;
// Macro keyword used here to define PI = 3.14;
# define PI 3.14

# define MAXX(x,y) (x>y ? x : y)

// While compiling, first the compiler will preprocess the PI where it will replace 3.14 with the places where PI is used;


int CalculateArea(int &r)
{
    // Instead of writing 3.14 here, I can simply Define PI value above using MACRO
    return PI*r*r;
}

int main()
{
    int radius;
    cout<<"Enter the radius: ";
    cin>>radius;

    cout<<"The Area is: "<<CalculateArea(radius)<<endl;

    cout<<"max of 2,4 is "<<MAXX(2,4)<<endl;

    return 0;
}