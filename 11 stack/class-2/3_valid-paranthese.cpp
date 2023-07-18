#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;
    s = "{}";

    stack<char> stack;

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            stack.push(ch);
        }
        else
        {
            if (!stack.empty())
            {
                char topStack = stack.top();
                if (ch = ')' && topStack == '(')
                {
                    stack.pop();
                }
                else if (ch = '}' && topStack == '{')
                {
                    stack.pop();
                }
                else if (ch = ']' && topStack == '[')
                {
                    stack.pop();
                }

                else
                {
                    // if don't match
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    if (stack.empty())
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}