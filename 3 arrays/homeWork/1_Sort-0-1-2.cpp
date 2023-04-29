#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 0, 2, 1, 2, 0};
    int start, middle, end;
    start = 0, middle = 0, end = arr.size() - 1;

    while (middle <= end)
    {
        if (arr[middle] == 0)
        {
            swap(arr[start], arr[middle]);
            start++;
            middle++;
        }
        else if (arr[middle] == 1)
        {
            middle++;
        }
        else
        {
            swap(arr[middle], arr[end]);
            end--;
        }
    }

    for (auto value : arr)
    {
        cout << value << endl;
    }

    return 0;
}