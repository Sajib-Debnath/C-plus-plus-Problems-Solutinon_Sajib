#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(int arr[], int end, int key)
{
    int start = 0;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            if (arr[mid] > arr[mid - 1])
            {
                return mid;
            }
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 11, 11, 11, 11, 13, 15, 17};
    int key = 11, size = 10;
    cout << firstOccurrence(arr, size, key);

    return 0;
}