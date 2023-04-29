#include <iostream>
#include <string.h>
using namespace std;

void findLastOccurrence(string &strA, char x, int &ansA, int i)
{
    if (i < 0)
    {
        return;
    }

    if (strA[i] == x)
    {
        ansA = i;
        cout << ansA + 1;
        return;
    }
    findLastOccurrence(strA, x, ansA, i - 1);
}

int main()
{
    string str = "sajib";
    cout << str.size() << endl;
    char x = 'j';
    int ans = -1;
    int i = 4;
    findLastOccurrence(str, x, ans, i);
    return 0;
}