#include <iostream>
#include <vector>
using namespace std;

void summationOfArray(int arr[], int i, int &sum, int size)
{
    if (i >= size)
        return;

    // fh
    sum = arr[i] + sum;
    summationOfArray(arr, i + 1, sum, size);
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int sum = 0;

    summationOfArray(arr, i, sum, size);
    cout << sum;
    return 0;
}