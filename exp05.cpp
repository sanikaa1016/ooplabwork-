
#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name, urn;
    int age;

public:
    Person(string n = "", int a = 0, string u = "")
        : name(n), age(a), urn(u) {}

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "URN: " << urn << endl;
    }
};

class Student : public Person
{
protected:
    string rollNo, course;
    float cgpa;

public:
    Student(string n = "", int a = 0, string u = "",
            string r = "", string c = "", float g = 0)
        : Person(n, a, u), rollNo(r), course(c), cgpa(g) {}

    void display()
    {
        Person::display();

        cout << "Roll No: " << rollNo << endl;
        cout << "Course: " << course << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main()
{
    Student s("Rahul", 19, "URN101", "101", "AI & DS", 8.5);

    cout << "Student Details:" << endl;
    s.display();

    return 0;
}
