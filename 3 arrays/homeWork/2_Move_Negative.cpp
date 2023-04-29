#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{1, -3, 4, -5, 2, 4};

    int start = 0;
    int end = v.size() - 1;

    while (start != end)
    {
        if (v[start] > 0)
        {
            start++;
        }
        else
        {
            swap(v[start], v[end]);
            end--;
        }
    }

    for (auto val : v)
    {
        cout << val << endl;
    }

    return 0;
}