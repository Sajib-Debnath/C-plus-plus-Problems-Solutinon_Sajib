#include <iostream>
using namespace std;

void printAllSubSequence(string str, string output, int i = 0)
{
    if (i >= str.size())
    {
        cout << output << endl;
        return;
    }

    // excluding
    printAllSubSequence(str, output, i + 1);

    // including
    output.push_back(str[i]);
    printAllSubSequence(str, output, i + 1);
}

int main()
{
    string str = "abc";
    string output = "";

    printAllSubSequence(str, output);
    return 0;
}