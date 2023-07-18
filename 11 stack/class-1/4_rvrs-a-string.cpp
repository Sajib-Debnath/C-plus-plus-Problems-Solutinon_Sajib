#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "sajib";
    stack<char> stk;

    for (int i = 0; i < str.length(); i++)
    {
        stk.push(str[i]);
    }

    while (!stk.empty())
    {
        cout << stk.top() << endl;
        stk.pop();
    }

    return 0;
}