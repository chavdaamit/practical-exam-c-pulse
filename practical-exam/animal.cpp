#include <iostream>
using namespace std;

class Animal
{
private:
    string name;
    string sound;

public:
    void setName(string n)
    {
        name = n;
    }

    void setSound(string s)
    {
        sound = s;
    }

    string getName()
    {
        return name;
    }

    string getSound()
    {
        return sound;
    }

    void makeSound()
    {
        cout << name << " makes sound: " << sound << endl;
    }
};

class Dog : public Animal
{
public:
    void dogSound()
    {
        setName("Dog");
        setSound("Bark");
        makeSound();
    }
};

class Cat : public Animal
{
public:
    void catSound()
    {
        setName("Cat");
        setSound("Meow");
        makeSound();
    }
};

int main()
{
    Dog d;
    Cat c;

    d.dogSound();
    c.catSound();

    return 0;
}