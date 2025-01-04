#include<iostream>
using namespace std;

class Ve
{
public:
    int x;
    int y;

    Ve():x(0),y(0){};

    Ve(int a, int b): x(a),y(b){};

    Ve operator+(Ve &obj)
    {
        Ve temp;
        temp.x = this->x + obj.x;
        temp.y = this->y + obj.y;
        return temp;
    }

    void print()
    {
        cout<<this->x<<" + "<<this->y<<endl;
    }
};

int main()
{
    Ve a(2,4);
    Ve b(2,4);

    Ve c = a+b;
    c.print();

    return 0;
}