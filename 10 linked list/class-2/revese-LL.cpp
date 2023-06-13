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

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
    }
};

//
//
//
void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    head->next = newNode;
    tail = newNode;
}

Node *reverseLL(Node *&prevNode, Node *&currNode)
{

    if (currNode == NULL)
    {
        return prevNode;
    }

    Node *nextNode = currNode->next;
    currNode->next = prevNode;
    reverseLL(currNode, nextNode);
}

//
//
//
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

    insertAtTail(head, tail, 5);
    insertAtTail(head, tail, 7);
    // insertAtTail(head, tail, 7);

    Node *prevNode = NULL;
    Node *currNode = head;

    Node *headLL = reverseLL(prevNode, currNode);

    print(headLL);
    return 0;
}