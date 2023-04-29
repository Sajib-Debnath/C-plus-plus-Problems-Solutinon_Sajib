#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int num)
    {
        this->data = num;
        this->next = NULL;
    }
    ~Node()
    {
        cout << "sajib" << endl;
    }
};

//
//
// length of linked list
int length(Node *&head)
{
    Node *temp = head;

    if (head == NULL)
    {
        cout << 0 << endl;
        return 0;
    }

    int i = 1;
    while (temp->next != NULL)
    {
        temp = temp->next;
        i++;
    }
    return i;
}
//
//
// insert at head
void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);

    newNode->next = head;

    if (head == NULL)
    {
        tail = newNode;
    }

    head = newNode;
}

//
//
// insert at tail
void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
        tail->next = newNode;

    tail = newNode;
}

//
//
// insert at specific position
void insertAtSpecificPosition(Node *&head, Node *&tail, int data, int pos)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if (pos == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }

    int len = length(head);
    if (pos == len)
    {
        insertAtTail(head, tail, data);
        return;
    }

    int i = 1;
    Node *prev = head;
    while (i < pos)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;

    Node *newNode = new Node(data);

    newNode->next = curr;

    prev->next = newNode;
}

//
//
// delete
void deleteSpecificPosition(Node *&head, Node *&tail, int pos)
{

    if (head == NULL)
    {
        cout << "You can't delete" << endl;
        return;
    }

    if (pos = 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    if (length(head) == pos)
    {
        Node *prev = head;
        int i = 1;
        while (i < pos - 1)
        {
            prev = prev->next;
            i++;
        }
        prev->next = NULL;
        Node *temp = tail;
        tail = prev;
        delete prev;
    }
}
//
//
// print
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;

    Node *tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);

    insertAtTail(head, tail, 10);

    // insertAtSpecificPosition(head, tail, 5, 3);
    deleteSpecificPosition(head, tail, 1);
    print(head);

    return 0;
}