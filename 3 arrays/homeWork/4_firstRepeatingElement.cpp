#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 4, 4, 8, 9, 7};
    int key = 4;

    unordered_map<int, int> hash;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << hash[arr[i]] << endl;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (hash[arr[i]] > 1)
        {
            cout << i + 1;
            break;
        }
    }
    return -1;

    return 0;
}