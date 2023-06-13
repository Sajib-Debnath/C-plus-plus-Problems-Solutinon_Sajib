#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data)
    {
        if (top < size - 1)
        {
            // space available
            // insert
            top++;
            arr[top] = data;
        }
        else
        {
            // space not available
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top > -1)
        {
            top--;
        }
        else
            cout << "Stack underflow" << endl;
    }

    void getTop()
    {
        cout << arr[top];
    }

    // get size
    void getSize()
    {
        cout << top + 1 << endl;
    }
    
    void isEmpty()
    {
        if (top == -1)
        {
            cout << "Empty" << endl;
        }
        else
        {
            cout << "Not Empty" << endl;
        }
    }
};

int main()
{

    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();

    s.getTop();
    return 0;
}