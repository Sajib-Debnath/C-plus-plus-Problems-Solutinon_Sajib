#include <iostream>
using namespace std;

// class creation
class Animal
{
    // states properties
public:
    string name;
    int age;

    // method
    void eat()
    {
        cout << "chicken";
    }
};

int main()
{
    // object creation\
    static allocation
    Animal dog;
    dog.name = "tommy";
    cout << dog.name<<endl;

    dog.eat();

    // properties value define
    return 0;
}