#include <iostream>
using namespace std;

// checkPalindrome
bool checkPalindrome(string &str, int start, int end)
{
    if (str[start] != str[end])
        return false;

    if (start >= end)
        return true;

    return checkPalindrome(str, start + 1, end - 1);
}

int main()
{
    string str = "racecar";
    int start = 0, end = str.size() - 1;

    if (checkPalindrome(str, start, end))
        cout << "Yes Palindrome";
    else
        cout << "This is not a palindrome";

    return 0;
}