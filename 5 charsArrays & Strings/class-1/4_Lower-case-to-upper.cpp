#include <iostream>
#include <string.h>
using namespace std;

void lowerCaseToUpperCase(char arr[])
{
    for (int i = 0; i < strlen(arr); i++)
    {
        if (97 <= arr[i] && arr[i] <= 122)
        {
            arr[i] = arr[i] - 'a' + 65;
            cout << arr[i];
        }
        else
            cout << arr[i];
    }
}
int main()
{
    char arr[100];
    cin >> arr;

    lowerCaseToUpperCase(arr);

    return 0;
}