#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1{5, 6, 9};
    vector<int> arr2{2, 4, 8, 12};
    vector<int> sortedArray;

    int i = 0, j = 0;

    while (i <= arr1.size() || j <= arr2.size())
    {
        if (arr1[i] > arr2[j])
        {
            sortedArray.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i] < arr2[j])
        {
            sortedArray.push_back(arr1[j]);
            j++;
        }
    }

    return 0;
}