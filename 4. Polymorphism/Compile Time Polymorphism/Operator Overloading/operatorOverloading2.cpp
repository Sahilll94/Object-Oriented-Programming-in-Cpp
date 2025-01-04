#include <iostream>
using namespace std;

class Vector {
public:
    int x, y, z;

    // Parameterized Constructor
    Vector(int a, int b, int c) : x(a), y(b), z(c) {}

    // Overload the * operator for dot product
    int operator*(Vector &v) {
        return (this->x * v.x) + (this->y * v.y) + (this->z * v.z);
    }

    void print() {
        cout << "<" << x << ", " << y << ", " << z << ">" << endl;
    }
};

int main() {
    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);

    // Calculate the dot product -> x1*x2+y1*y2+z1*z2;
    int dotProduct = v1 * v2;

    cout << "Vector 1: ";
    v1.print();

    cout << "Vector 2: ";
    v2.print();

    cout << "Dot Product: " << dotProduct << endl;

    return 0;
}
