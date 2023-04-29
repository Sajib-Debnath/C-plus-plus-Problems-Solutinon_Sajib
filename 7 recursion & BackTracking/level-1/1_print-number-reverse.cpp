#include <iostream>
using namespace std;

void printNumberReverse(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    printNumberReverse(n - 1);
}

int main()
{
    cout << "Enter the number till you want to print : ";
    int n;
    cin >> n;

    printNumberReverse(n);
    return 0;
}