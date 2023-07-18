#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int rear;
    int front;
    int size;

    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        if (rear == size - 1 && front == 0)
        {
            cout << "Stack is loaded." << endl;
        }

        else if (rear == front - 1)
        {
            cout << "Stack is loaded." << endl;
        }

        else if (rear == -1 && front == -1)
        {
            rear++;
            front++;
            arr[front] = data;
        }

        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }

        else
        {
            rear++;
            arr[front] == data;
        }
    }

    void pop()
    {
        // queue is empty
        // single element
        // circular nature
        // normal flow
        if (front == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
};

int main()
{

    return 0;
}