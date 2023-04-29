#include <iostream>
using namespace std;

// remove All SubString from a string
void removeAllSubString(string &str, string &subString)
{
    int found = str.find(subString);
    if (found != string::npos)
    {
        string leftPart = str.substr(0, found);
        string rightPart = str.substr(0 + subString.size(), str.size());
        str = leftPart + rightPart;

        removeAllSubString(str, subString);
    }

    // base case
    else
        return;
}

int main()
{
    string str = "faagaabchjihiohabc";
    string subString = "abc";
    removeAllSubString(str, subString);
    cout << str;
    return 0;
}