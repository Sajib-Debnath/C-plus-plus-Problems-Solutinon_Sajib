#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<int> arr{10, 1, 4, 8, 5, 7};

    for (int i = 0; i < arr.size(); i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    for (auto v : arr)
    {
        cout << v << endl;
    }

    return 0;
}