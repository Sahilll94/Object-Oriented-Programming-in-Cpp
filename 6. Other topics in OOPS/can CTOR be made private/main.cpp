#include<iostream>
using namespace std;

class Box
{
    int width;

    Box(int _w) : width(_w) {};

    public:
        int getWidth() const
        {
            return width;
        }    

        void setWidth(int _width)
        {
            this->width = _width;
        }

        friend class BoxFactory;
};

class BoxFactory
{
    int count;

    public:
        Box getABox(int _w)
        {
            ++count;
            return Box(_w);
        }

};


int main()
{
    // Below code will show error as CTOR and attribute is inaccessible -> to encounter it, we can use friend keyword which allows specific classes or function to use CTOR;
    // Box b(10);

    BoxFactory bfact;
    Box b = bfact.getABox(5);

    cout<<"Width : "<<b.getWidth()<<endl;

    return 0;
}