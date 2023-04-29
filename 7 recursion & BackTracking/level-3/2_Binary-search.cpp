#include <iostream>
#include <vector>
using namespace std;

// binary search using recursive function
int binarySearch(vector<int> arr, int n, int start, int end)
{
    // base case -i (key found)
    if (start > end)
        return -1;

    // find the middle
    int middle = start + (end - start / 2);

    // base case -ii (key not found)
    if (arr[middle] == n)
        return middle;

    if (arr[middle] > n)
        return binarySearch(arr, n, start, middle - 1);

    else if (arr[middle < n])
        return binarySearch(arr, n, middle + 1, end);
}

int main()
{
    vector<int> arr{10, 20, 30, 50, 60, 70};
    cout << arr.size();
    cout << "Enter number you want to search : ";
    int n;
    cin >> n;
    int start = 0, end = arr.size() - 1;

    cout << binarySearch(arr, n, start, end);
    return 0;
}

//