#include <iostream>
using namespace std;

int climbStairs(int stairs)
{
    // base case
    if (stairs == 0 || stairs == 1)
        return 1;

    // f(n) = f(n-1) + f(n-2)
    int noOfWays = climbStairs(stairs - 1) + climbStairs(stairs - 2);
    return noOfWays;
}
int main()
{
    cout << "Enter the number stairs : ";
    int n;
    cin >> n;
    cout << "The number of ways : " << climbStairs(n);
    return 0;
}