#include <iostream>
using namespace std;

int findCharacter(string str, int size, char chr, int i)
{
    // base case
    if (i == size - 1)
        return 0;

    // ek app solve karlo, baki recursion samal lega
    if (str[i] == chr)
    {
        return i;
    }

    // recursive function
    return findCharacter(str, size, chr, i + 1);
}

int main()
{

    string str = "sajib";
    char chr = 'j';
    int size = 5;
    int i = 0;

    cout << findCharacter(str, size, chr, i);
    return 0;
}