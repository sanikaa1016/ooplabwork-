
#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:

    // Default Constructor
    Complex()
    {
        real = 0;
        imag = 0;
    }

    // Function Overloading
    Complex(float r)
    {
        real = r;
        imag = 0;
    }

    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }

    // Operator Overloading (+)
    Complex operator + (Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    // Operator Overloading (*)
    Complex operator * (Complex c)
    {
        return Complex(
            real * c.real - imag * c.imag,
            real * c.imag + imag * c.real
        );
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex c3 = c1 + c2;
    Complex c4 = c1 * c2;

    cout << "C1 + C2 = ";
    c3.display();

    cout << "C1 * C2 = ";
    c4.display();

    return 0;
}
