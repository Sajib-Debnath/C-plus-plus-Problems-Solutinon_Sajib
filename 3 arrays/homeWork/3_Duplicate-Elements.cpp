#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 3, 2, 3, 4};

    int element = arr[0];
    while (element != arr[element])
    {
        swap(element, arr[element]);
    }

    cout << element;

    return 0;
}