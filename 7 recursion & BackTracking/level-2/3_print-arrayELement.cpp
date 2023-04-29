#include <iostream>
using namespace std;

void printAllElement(int arr[], int i, int n)
{
    if (i >= n)
        return;

    cout << arr[i] << "    ";
    printAllElement(arr, i + 1, n);
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i = 0, n = 5;

    printAllElement(arr, i, n);
    return 0;
}