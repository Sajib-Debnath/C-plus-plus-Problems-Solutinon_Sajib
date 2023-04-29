#include <iostream>
#include <string.h>
using namespace std;

// using swapping method
void reverseString(string &strA, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    // int temp = str[start];
    // str[start] = str[end];
    // str[end] = temp;

    swap(strA[start], strA[end]);

    reverseString(strA, start + 1, end - 1);
}

int main()
{
    string str = "sajib";
    int start = 0, end = str.size() - 1;
    reverseString(str, start, end);
    cout << str << endl;
    return 0;
}