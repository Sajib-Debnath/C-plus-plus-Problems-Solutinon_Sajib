#include <iostream>
#include <limits.h>
using namespace std;

void maxNumber(int arr[], int size, int &max, int i = 0)
{
    // base case
    if (i >= size)
        return;

    // ek app solve karlo, baki recursion samal lega
    if (arr[i] > max)
        max = arr[i];

    // recursive function
    maxNumber(arr, size, max, i + 1);
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int max = INT_MIN;

    maxNumber(arr, size - 1, max);
    cout << max;
    return 0;
}