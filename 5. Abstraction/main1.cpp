#include <iostream>
using namespace std;

class Abstraction
{
private:
    int num;
    char ch;

public:
    void SetAbstraction(int n, char c)
    {
        this->num = n;
        this->ch = c;
    }

    void getAbstraction()
    {
        cout << "num: " << this->num << " ch: " << this->ch << endl;
    }
};

int main()
{
    Abstraction a; 
    // here, I am not able to get the attributes as it is declared private right? this is called ABSTRACTION where we hide some implementation;
    // cout<<a.num<<endl;
    // cout<<a.ch<<endl;

    a.SetAbstraction(4,'s');
    a.getAbstraction();

    return 0;
}