#include <iostream>
using namespace std;

int main() {
    // Variables and Data Types
    int a = 10;
    int b = 5;
    float c = 3.14;
    char ch = '5';
    bool isTrue = true;

    // Constant
    const double PI = 3.14159;

    // Input (I/O)
    int userNum;
    cout << "Enter a number: ";
    cin >> userNum;

    // Operators and Output (I/O)
    cout << "Sum: " << a + b << endl;
    cout << "Sub: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Float value: " << c << endl;
    cout << "Character: " << ch << endl;
    cout << "Boolean value: " << isTrue << endl;
    cout << "Constant PI: " << PI << endl;
    cout << "You entered: " << userNum << endl;

    return 0;
}
