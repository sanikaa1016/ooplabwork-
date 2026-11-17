
#include <iostream>
using namespace std;

template <typename T>
class Stack
{
    int top;
    T arr[5];

public:

    Stack()
    {
        top = -1;
    }

    void push(T a)
    {
        if (top == 4)
        {
            cout << "Stack is Full" << endl;
        }
        else
        {
            ++top;
            arr[top] = a;
            cout << "Pushed: " << a << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << "Popped: " << arr[top] << endl;
            top--;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    s.display();

    return 0;
}
