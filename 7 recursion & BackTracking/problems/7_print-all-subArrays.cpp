#include <iostream>
#include <vector>
using namespace std;

void printAllSubArray_util(vector<int> &arr, int start, int end)
{
    // base case
    if (end == arr.size())
        return;

    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // recursive function
    printAllSubArray_util(arr, start, end + 1);
}

void printSubArray(vector<int> &arr)
{
    for (int start = 0; start < arr.size(); start++)
    {
        int end = start;
        printAllSubArray_util(arr, start, end);
    }
}

int main()
{
    vector<int> arr{1, 3, 5, 7, 9};
    printSubArray(arr);
    return 0;
}