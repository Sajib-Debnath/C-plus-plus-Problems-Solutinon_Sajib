#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string strA;
    string strB;

    int step = 1;
    for (int i = 0; i < strA.size() + strB.size(); i++)
    {
        if (strA[i] == strB[i])
        {
            step++;
        }
        else
        {
            cout << "Doesn't matched";
            break;
        }
    }
    cout << "matched";

    return 0;
}