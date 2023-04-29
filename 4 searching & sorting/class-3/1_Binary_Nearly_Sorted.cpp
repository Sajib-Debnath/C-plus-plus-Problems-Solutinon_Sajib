#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{4, 3, 7, 6, 9, 10};
    int target = 9;
    int start = 0, end = arr.size() - 1;

    while (start <= end)
    {
        int middle = start + (end - start) / 2;

        if (arr[middle] == target)
        {
            cout << middle;
            break;
        }
        else if ((middle - 1 >= 0) && (arr[middle - 1] > target))
        {
            cout << middle - 1;
            break;
        }
        else if ((middle + 1 < arr.size()) && (arr[middle + 1] > target))
        {
            cout << middle + 1;
            break;
        }
        else if (arr[middle] > target)
        {
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }

    return 0;
}