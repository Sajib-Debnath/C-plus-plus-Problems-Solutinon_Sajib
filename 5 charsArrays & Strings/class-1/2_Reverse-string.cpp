#include <iostream>
#include <string.h>
using namespace std;

int getLength(char arr[])
{
    int i = 0;

    while (arr[i] != '\0')
    {
        i++;
    }

    return i++;
}

void reverseString(char arr[])
{
    int start = 0, end = getLength(arr) - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << arr;
}

int main()
{
    char name[10];
    cin >> name;
    // cin.getline(name, 50);

    cout << getLength(name);

    cout << name << endl;
    reverseString(name);

    return 0;
}