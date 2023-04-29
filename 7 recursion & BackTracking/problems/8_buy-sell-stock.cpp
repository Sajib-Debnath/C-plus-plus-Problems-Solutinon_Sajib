#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void findMaxProfit(vector<int> &arr, int minPrice, int &maxProfit, int i = 0)
{
    // base case
    if (i == arr.size())
        return;

    if (arr[i] < minPrice)
        minPrice = arr[i];

    int profit = arr[i] - minPrice;
    if (profit > maxProfit)
        maxProfit = profit;

    findMaxProfit(arr, minPrice, maxProfit, i + 1);
}

int main()
{
    vector<int> arr{7, 6, 8, 3, 5, 4, 2};
    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;

    findMaxProfit(arr, minPrice, maxProfit);
    cout << maxProfit;
    return 0;
}