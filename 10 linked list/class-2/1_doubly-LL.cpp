#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        cout << "deleted" << endl;
    }
};

//
//
// insert at head
void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        newNode->data = data;
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

//
//
// insert at tail
void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

//
//
// get the length
int getLength(Node *&head)
{
    Node *temp = head;
    int i = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        i++;
    }
    return i;
}

//
//
// insert at any position
void insertAtAnyPosition(Node *&head, Node *&tail, int data, int pos)
{
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        newNode->data = data;
        head = newNode;
        tail = newNode;
        return;
    }

    if (pos == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }

    if (pos == getLength(head))
    {
        insertAtTail(head, tail, data);
        return;
    }

    if (pos < getLength(head))
    {
        cout << "Please your position is over than length" << endl;
        return;
    }

    Node *before = head;
    int i = 1;
    while (i < pos)
    {
        before = before->next;
        i++;
    }
    Node *curr = before->next;
    before->next = newNode;
    newNode->prev = before;
    curr->prev = newNode;
    newNode->next = curr;
}

//
//
// deletion
void deleteAtAnyPosition(Node *&head, Node *&tail, int pos)
{

    if (head == NULL)
    {
        cout << "U can't delete" << endl;
        return;
    }

    //
    // case only if there one element

    //
    // delete the head node
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }

    // if position is greater than length
    if (pos > getLength(head))
    {
        cout << "Give a valid position" << endl;
        return;
    }

    //
    // delete the tail node
    if (pos == getLength(head))
    {
        Node *temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
    }

    if (pos < getLength(head))
    {
        /* code */
    }

    //
    // delete at any position
    Node *left = head;
    int i = 1;
    while (i < pos - 1)
    {
        left = left->next;
        i++;
    }
    Node *curr = left->next;
    Node *right = curr->next;

    left->next = right;
    right->prev = left;

    curr->next = NULL;
    curr->prev = NULL;

    delete curr;
}

//
//
// print all the elements
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

//
// 
//
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 3);
    insertAtTail(head, tail, 7);
    insertAtTail(head, tail, 9);
    insertAtAnyPosition(head, tail, 11, 2);

    // deleteAtAnyPosition(head, tail, 3);

    print(head);
    return 0;
}