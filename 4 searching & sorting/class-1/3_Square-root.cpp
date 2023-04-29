#include <iostream>
#include <vector>
using namespace std;

int findSquareRoot(vector<int> arr, int key)
{
    int start = 0, end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] * arr[mid] == key)
            return arr[mid];

        else if (arr[mid] > key)
            end = mid - 1;

        else
            start = mid + 1;
    }
    return -1;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 7, 10, 15, 20, 25};
    int key = 26;

    int square = findSquareRoot(arr, key);

    cout << square;
    return 0;
}
//