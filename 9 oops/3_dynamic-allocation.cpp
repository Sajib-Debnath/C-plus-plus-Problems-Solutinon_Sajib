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
    Animal *dog = new Animal;

    (*dog).age = 30;
    dog->age = 40;
    //(*dog).age = dog->age

    cout << dog->age;
    return 0;
}