#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int top1;
    int top2;

public:
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void pushStack1(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "space not available" << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }

    void pushStack2(int data)
    {
        if (top2 - top1 == 1)
            cout << "space not available" << endl;
        else
        {
            top2--;
            arr[top2] = data;
        }
    }

    void popStack1()
    {
        if (top1 > -1)
        {
            top1--;
        }
        else
            cout << "stack underflow" << endl;
    }

    void popStack2()
    {
        if (top2 < size)
        {
            top2++;
        }
        else
            cout << "stack underflow" << endl;
    }
};
int main()
{

    Stack s(2);

    s.pushStack1(5);
    s.pushStack1(5);

    s.popStack1();

    s.pushStack1(5);

    return 0;
}