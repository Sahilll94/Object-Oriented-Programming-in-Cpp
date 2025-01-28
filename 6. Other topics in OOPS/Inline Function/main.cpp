#include<iostream>
using namespace std;    

// Inline is used when your function code is SMALL or 2-3 lines code;
// Inline simply replaces the content of the function into the main function during compile time;
// Here, during compile time, showNumber() function content which is : cout<<"Entered number is : "<<num<<endl; is being replaced in the main function whenver you call this function;
// It rreduces the size of the executable file and also reduce function calling overhead on stack;
// while calling function from main, it is maintained over a stack, first main function will be there then other function which is being called by main then each function will return something then main will go to next line and call other function.


inline void showNumber(int num)
{
    cout<<"Entered number is: "<<num<<endl;
}

int main()
{


    int n;
    cout<<"Enter number: ";
    cin>>n;

    // cout<<"Entered number is: "<<num<<endl; ----> inline replaces this code below;
    showNumber(n);  

    return 0;
}