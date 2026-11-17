
#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
    string brand;
    string number;
    int hours;

public:

    // Constructor
    Vehicle()
    {
        brand = "";
        number = "";
        hours = 0;
    }

    // Input function
    void input()
    {
        cout << "Enter Vehicle Brand: ";
        cin >> brand;

        cout << "Enter Vehicle Number: ";
        cin >> number;

        cout << "Enter Parking Hours: ";
        cin >> hours;
    }

    // Display function
    void display()
    {
        cout << "\n----- Vehicle Details -----" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Vehicle Number: " << number << endl;
        cout << "Parking Hours: " << hours << endl;
    }

    // Calculate parking charges
    void calculateCharges()
    {
        cout << "Parking Charges: Rs. " << hours * 20 << endl;
    }
};

int main()
{
    Vehicle v;
    int choice;

    do
    {
        cout << "\n===== VEHICLE MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Vehicle" << endl;
        cout << "2. Display Vehicle" << endl;
        cout << "3. Calculate Parking Charges" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            v.input();
            cout << "Vehicle Added Successfully!" << endl;
            break;

        case 2:
            v.display();
            break;

        case 3:
            v.calculateCharges();
            break;

        case 4:
            cout << "Thank You!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
