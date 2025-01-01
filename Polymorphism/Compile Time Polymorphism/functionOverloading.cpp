#include<iostream>
using namespace std;

// The below member functions of Add class is determining polymorphism at COMPILE TIME like whether to take the function as distinguish function from others or not.
class Add
{
public:
    int sum(int a,int b)
    {
        return a+b;
    }

    // IT WON'T WORK AS THERE IS NO DIFFERENCE IN ARGUMENTS OR RETURN TYPE OR SAY FUNCTION TYPE;
    // int sum(int a,int b)
    // {
    //     return a+b;
    // }

    double sum(double a,double b)
    {
        return a+b;
    }

    int sum(int a,int b, int c)
    {
        return a+b+c;
    }

    int sum(double a,int b, int c)
    {
        return a+b+c;
    }
    
    // WON'T WORK
    // double sum(double a,int b, int c)
    // {
    //     return a+b+c;
    // }

};


int main()
{
    Add a;
    // The game is of parameters.
    int ans = a.sum(1,2,3);
    cout<<ans<<endl;

    int ans1 = a.sum(1,2);
    cout<<ans1<<endl;

    double ans2 = a.sum(4.5,3.2);
    cout<<ans2<<endl;



    return 0;
}