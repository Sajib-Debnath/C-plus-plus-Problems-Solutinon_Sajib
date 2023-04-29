#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    // f(n) = f(n-1) + f(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    cout << "Enter the number till you want to find fibonacci : ";
    int n;
    cin >> n;

    cout << fibonacci(n);
    return 0;
}