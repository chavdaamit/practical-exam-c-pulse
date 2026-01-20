#include <iostream>
using namespace std;

class Person
{

private:
    string name;
    int age;
    string address;

public:
    Person(string n, int a, string addr)
    {

        name = n;
        age = a;
        address = addr;
    }

    void SetName(string n)
    {
        name = n;
    }

    void SetAge(int a)
    {
        age = a;
    }

    void SetAddress(string addr)
    {
        address = addr;
    }

    string GetName()
    {
        return name;
    }

    int GetAge()
    {
        return age;
    }

    string GetAddress()
    {
        return address;
    }

    void display()
    {

        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

int main()
{

    int n;
    cout << "enter your number person: " << endl;
    cin >> n;

    Person*Persons[n];


    string name, address;
    int age;

    for (int i = 0; i < n; i++)
    {

        cout << "\nenter  detail person: " << i + 1 << endl;

        cout << "name: ";
        cin.ignore();
        getline(cin, name);

        cout << "age: ";
        cin >> age;

        cout << "Address: ";
        cin.ignore();
        getline(cin, address);

        Persons[i] = new Person(name, age, address);
    }

    cout<<"\n person detail";
    for (int i = 0; i < n; i++)
    {
     cout<<"\nperson "<<i+1<<endl;
     Persons[i]->display();

    }
    


    return 0;
}