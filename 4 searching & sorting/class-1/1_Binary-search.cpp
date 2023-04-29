#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main(void)
{

    int arr[] = {2, 3, 4, 10, 40};
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}