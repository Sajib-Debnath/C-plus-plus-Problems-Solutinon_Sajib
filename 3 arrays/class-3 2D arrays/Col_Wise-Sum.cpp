#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the values of rows and cols : " << endl;
    int rows, cols;
    cin >> rows >> cols;

    int arr[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[j][i];
        }

        cout << sum << endl;
        sum = 0;
    }

    return 0;
}