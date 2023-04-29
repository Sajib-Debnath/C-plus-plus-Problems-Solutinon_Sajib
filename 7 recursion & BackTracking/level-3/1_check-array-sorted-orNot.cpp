#include <iostream>
#include <vector>
using namespace std;

// this function to test array sorted or not.
// if yes return true, if not return false

bool checkSort(vector<int> &arr, int i = 0)
{
    // base case
    if (i == arr.size() - 1)
        return true;

    // ek case tum solve karlo
    if (arr[i] > arr[i + 1])
        return false;

    return checkSort(arr, i + 1);
}
int main()
{
    vector<int> arr{10, 20, 30, 40, 50};

    if (checkSort(arr))
        cout << "Sorted";
    else
        cout << "Not sorted";

    return 0;
}