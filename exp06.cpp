
#include <iostream>
using namespace std;

class Shape
{
protected:
    int l, b, r;

public:
    virtual void area() = 0;
};

class Circle : public Shape
{
public:
    void area()
    {
        cout << "Enter radius: ";
        cin >> r;

        cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "Enter length and breadth: ";
        cin >> l >> b;

        cout << "Area of Rectangle: " << l * b << endl;
    }
};

class Triangle : public Shape
{
public:
    void area()
    {
        cout << "Enter base and height: ";
        cin >> l >> b;

        cout << "Area of Triangle: " << 0.5 * l * b << endl;
    }
};

int main()
{
    Circle obj1;
    Rectangle obj2;
    Triangle obj3;

    obj1.area();
    obj2.area();
    obj3.area();

    return 0;
}
