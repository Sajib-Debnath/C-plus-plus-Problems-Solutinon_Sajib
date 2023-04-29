#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrome(char arr[])
{
    int end = strlen(arr) - 1;
    int start = 0;

    while (start <= end)
    {
        if (arr[start] == arr[end])
        {
            start++;
            end--;
        }
        else
        {
            cout << "it's not a palindrome";
            return false;
        }
    }
    cout << "It's a palindrome";
    return true;
}

int main()
{
    char arr[100];
    cin >> arr;

    cout << checkPalindrome(arr);
    return 0;
}