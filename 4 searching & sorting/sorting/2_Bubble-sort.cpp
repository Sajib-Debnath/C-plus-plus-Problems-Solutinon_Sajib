#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // bubble sorting=============================================>

    vector<int> arr{10, 1, 4, 8, 5, 7};

    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (auto v : arr)
    {
        cout << v << endl;
    }

    return 0;
}