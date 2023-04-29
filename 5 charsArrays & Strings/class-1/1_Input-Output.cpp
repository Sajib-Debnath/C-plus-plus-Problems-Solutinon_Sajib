#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char name[10];
    // cin >> name;
    cin.getline(name, 50);

    cout << name;
    return 0;
}