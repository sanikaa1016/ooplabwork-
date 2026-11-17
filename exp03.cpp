
#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int age;

public:

    // Default Constructor
    Student()
    {
        name = "Unknown";
        age = 0;
    }

    // Parameterized Constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        name = s.name;
        age = s.age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << endl;
    }
};

int main()
{
    Student a;
    Student b("A", 19);
    Student c(b);

    cout << "Default Constructor:" << endl;
    a.display();

    cout << "Parameterized Constructor:" << endl;
    b.display();

    cout << "Copy Constructor:" << endl;
    c.display();

    return 0;
}
