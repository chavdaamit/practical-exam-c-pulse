# 📘 C++ OOP Programs Collection

This repository contains multiple **Object-Oriented Programming (OOP)** based C++ programs. These examples demonstrate key concepts such as:

* Classes and Objects
* Encapsulation (Getters & Setters)
* Inheritance
* Polymorphism (Virtual Functions)
* Abstraction (Pure Virtual Functions)
* Dynamic Memory Allocation

---

## 📂 Programs Included

1. **Book Management System**
2. **Person Management System (Using Dynamic Memory)**
3. **Animal Sound System (Inheritance Example)**
4. **Polymorphism Example (Virtual Function)**
5. **Shape Area Calculator (Abstraction Example)**

---

## 1️⃣ Book Management System

### 🔹 Description

This program stores details of multiple books such as:

* Title
* Author
* Published Year

It uses a class and an array of objects to store and display book details.

### 🔹 Source Code

```cpp
#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int publishedYear;
};

int main()
{
    int n;

    cout << "Enter your book number ";
    cin >> n;

    Book book[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\n Enter detail book " << i + 1 << endl;

        cout << "title  ";
        cin.ignore();
        getline(cin, book[i].title);

        cout << "Author ";
        getline(cin, book[i].author);

        cout << "publishedYear ";
        cin >> book[i].publishedYear;
    }

    cout << "\nBook Details \n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        cout << "Title: " << book[i].title << endl;
        cout << "Author: " << book[i].author << endl;
        cout << "Published Year: " << book[i].publishedYear << endl;
    }

    return 0;
}
```

### 🔹 Sample Output

```
Enter your book number 2

Enter detail book 1
title  C++ Basics
Author Bjarne
publishedYear 2015

Enter detail book 2
title  OOP Concepts
Author John
publishedYear 2020

Book Details

Book 1
Title: C++ Basics
Author: Bjarne
Published Year: 2015

Book 2
Title: OOP Concepts
Author: John
Published Year: 2020
```

---

## 2️⃣ Person Management System (Dynamic Memory)

### 🔹 Description

This program demonstrates:

* Encapsulation using private variables
* Getters and Setters
* Dynamic memory allocation using `new`
* Storing object pointers in an array

### 🔹 Source Code

```cpp
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

    void SetName(string n) { name = n; }
    void SetAge(int a) { age = a; }
    void SetAddress(string addr) { address = addr; }

    string GetName() { return name; }
    int GetAge() { return age; }
    string GetAddress() { return address; }

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
    cout << "Enter your number of persons: ";
    cin >> n;

    Person* Persons[n];

    string name, address;
    int age;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter detail person " << i + 1 << endl;

        cout << "Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Age: ";
        cin >> age;

        cout << "Address: ";
        cin.ignore();
        getline(cin, address);

        Persons[i] = new Person(name, age, address);
    }

    cout << "\nPerson Details" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "\nPerson " << i + 1 << endl;
        Persons[i]->display();
    }

    return 0;
}
```

### 🔹 Sample Output

```
Enter your number of persons: 1

Enter detail person 1
Name: Amit
Age: 20
Address: Bhavnagar

Person Details

Person 1
Name: Amit
Age: 20
Address: Bhavnagar
```

---

## 3️⃣ Animal Sound System (Inheritance)

### 🔹 Description

This program demonstrates:

* Inheritance
* Reusability of base class methods

### 🔹 Source Code

```cpp
#include <iostream>
using namespace std;

class Animal
{
private:
    string name;
    string sound;

public:
    void setName(string n) { name = n; }
    void setSound(string s) { sound = s; }

    string getName() { return name; }
    string getSound() { return sound; }

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
```

### 🔹 Sample Output

```
Dog makes sound: Bark
Cat makes sound: Meow
```

---

## 4️⃣ Polymorphism Example (Virtual Function)

### 🔹 Description

This program shows **runtime polymorphism** using:

* Base class pointer
* Virtual function

### 🔹 Source Code

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void show() {
        cout << "This is an animal" << endl;
    }
};

class Dog : public Animal {
public:
    void show() {
        cout << "Animal: Dog" << endl;
        cout << "Sound: Bark" << endl;
    }
};

class Cat : public Animal {
public:
    void show() {
        cout << "Animal: Cat" << endl;
        cout << "Sound: Meow" << endl;
    }
};

int main() {
    Animal* a[2];

    a[0] = new Dog();
    a[1] = new Cat();

    for (int i = 0; i < 2; i++) {
        a[i]->show();
        cout << endl;
    }

    return 0;
}
```

### 🔹 Sample Output

```
Animal: Dog
Sound: Bark

Animal: Cat
Sound: Meow
```

---

## 5️⃣ Shape Area Calculator (Abstraction)

### 🔹 Description

This program demonstrates:

* Abstraction using **pure virtual function**
* Implementation in derived classes

### 🔹 Source Code

```cpp
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area() {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

int main() {
    Shape* s1;
    Shape* s2;

    Circle c(5);
    Rectangle r(4, 6);

    s1 = &c;
    s2 = &r;

    s1->area();
    s2->area();

    return 0;
}
```

### 🔹 Sample Output

```
Area of Circle = 78.5
Area of Rectangle = 24
```

---



