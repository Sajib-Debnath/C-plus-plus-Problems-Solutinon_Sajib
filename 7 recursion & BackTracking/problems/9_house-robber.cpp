#include <iostream>
#include <vector>
using namespace std;

int houseRobber(vector<int> &v, int i = 0)
{
    if (i >= v.size())
    {
        return 0;
    }

    int robAmount1 = v[i] + houseRobber(v, i + 2);
    int robAmount2 = 0 + houseRobber(v, i + 1);

    return max(robAmount1, robAmount2);
}

int main()
{
    vector<int> v{1, 2, 3, 1};

    cout << houseRobber(v);
    return 0;
}