#include <iostream>
#include <string.h>
using namespace std;

void findLastOccurrence(string &strA, char x, int &ansA, int i)
{
    if (i >= strA.size() - 1)
    {
        return;
    }

    if (strA[i] == x)
    {
        ansA = i;
        cout << ansA;
    }
    findLastOccurrence(strA, x, ansA, i + 1);
}

int main()
{
    string str = "sajib";
    char x = 'j';
    int ans = -1;
    int i = 0;
    findLastOccurrence(str, x, ans, i);
    return 0;
}