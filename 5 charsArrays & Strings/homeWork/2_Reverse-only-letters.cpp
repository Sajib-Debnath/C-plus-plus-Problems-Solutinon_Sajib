#include <iostream>
#include <string.h>
using namespace std;

string reverseOnlyLetters(string str)
{
    int s = 0, e = str.size() - 1;

    while (s < e)
    {
        if (isalpha(str[s]) && isalpha(str[e]))
        {
            swap(str[s], str[e]);
            s++;
            e--;
        }
        else if (!isalpha(str[s]))
        {
            s++;
        }
        else
            e--;
    }

    return str;
}

int main()
{
    string str = "d-bnt";
    cout << reverseOnlyLetters(str);
    return 0;
}
//