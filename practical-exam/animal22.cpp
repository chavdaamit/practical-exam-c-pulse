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