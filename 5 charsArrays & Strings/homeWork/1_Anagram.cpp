#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int freqTable[256] = {0};
    char s[50] = "anagram";
    char t[50] = "nagaram";

    int lenS = strlen(s);

    for (int i = 0; i < strlen(s); i++)
    {
        // cout << (int)s[i] << endl;
        freqTable[(int)s[i]]++;
    }
    //
    for (int i = 0; i < strlen(t); i++)
    {
        freqTable[(int)t[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (freqTable[i] != 0)
        {
            cout << false;
            return 0;
        }
    }
    cout << true;

    return 0;
}