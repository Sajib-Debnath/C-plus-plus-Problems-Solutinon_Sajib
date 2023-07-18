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
        front = 0;
        rear = 0;
    }

    void push(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full";
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void pop()
    {
        if (front == rear)
        {
            cout << "Queue is underflow" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront()
    {
        if (front == rear)
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void print()
    {
        while (!isEmpty())
        {
            cout << arr[front] << endl;
            pop();
        }
    }

    int getSize()
    {
        return rear - front;
    }
};

int main()
{
    Queue q(3);

    q.push(5);
    q.push(10);
    q.push(12);
    cout << q.getSize();

    q.print();
    return 0;
}