#include <iostream>
using namespace std;

// class creation
class Animal
{
    // states properties
    // states properties
private:
    int weight;

public:
    string name;
    int age;

    // method
    void eat()
    {
        cout << "chicken";
    }

    int getter()
    {
        return weight;
    }

    void setter(int w)
    {
        weight = w;
    }
};

int main()
{
    // object creation
    Animal dog;

    dog.setter(23);
    cout << "Name of the owner is : " << dog.getter() << endl;

    // properties value define
    return 0;
}