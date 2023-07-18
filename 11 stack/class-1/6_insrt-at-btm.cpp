#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &stk, int target)
{
    if (stk.empty())
    {
        stk.push(target);
        return;
    }

    int temp = stk.top();
    stk.pop();

    solve(stk, target);

    stk.push(temp);
}

void insertAtBottom(stack<int> &stk)
{
    if (stk.empty())
    {
        cout << "Stack is empty";
        return;
    }

    int target = stk.top();
    stk.pop();

    solve(stk, target);
}

int main()
{
    stack<int> stk;

    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);

    insertAtBottom(stk);

    while (!stk.empty())
    {
        cout << stk.top() << endl;
        stk.pop();
    }

    return 0;
}