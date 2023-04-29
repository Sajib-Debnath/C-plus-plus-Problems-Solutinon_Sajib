#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *ptr = &a;

    cout << "It shows address of a  " << &a << endl;
    cout << "It shows the value stored in of a named variable address   " << *ptr << endl;
    cout << "It shows the address of a which we stored in ptr variable  " << ptr << endl;
    return 0;
}