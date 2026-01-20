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
