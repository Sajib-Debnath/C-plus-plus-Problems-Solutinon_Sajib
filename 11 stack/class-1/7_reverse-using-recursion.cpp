/*
to reverse a stack we have to do recursion two times
*/

#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &stk, int target)
{
    if (stk.empty())
    {
        stk.push(target);
        return;
    }

    int topElement = stk.top();
    stk.pop();

    insertAtBottom(stk, target);

    stk.push(topElement);
}

void reverseStackUsingRecursion(stack<int> &stk)
{
    if (stk.empty())
    {
        return;
    }

    int target = stk.top();
    stk.pop();

    reverseStackUsingRecursion(stk);

    insertAtBottom(stk, target);
}

int main()
{
    stack<int> stk;
    stk.push(20);
    stk.push(30);
    stk.push(40);

    reverseStackUsingRecursion(stk);

    while (!stk.empty())
    {
        cout << stk.top() << endl;
        stk.pop();
    }

    return 0;
}