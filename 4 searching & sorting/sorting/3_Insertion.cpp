#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{11, 5, 7, 9, 6, 8};

    for (int i = 1; i < arr.size(); i++)
    {
        int value = arr[i];

        int j = i - 1;
        for (j; j >= 0; j--)
        {
            if (arr[j] > value)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = value;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}