#include <iostream>
#include <vector>
using namespace std;

void printAllDigit(int num, int i = 0)
{
    // base case
    if (num <= 0)
        return;

    // processing
    int digit = num % 10;
    cout << digit << endl;
    num = num / 10;

    // recursive function
    printAllDigit(num, i + 1);
}

int main()
{
    int num = 652;

    printAllDigit(num);
    return 0;
}