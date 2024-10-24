#include <iostream>
using namespace std;
class Shape {
public:
    virtual float area()  = 0;
    virtual float perimeter()  = 0;
};
class Rectangle : public Shape {
private:
    float length;
    float width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}
    float area()   {
        return length * width;
    }

    float perimeter()   {
        return 2 * (length + width);
    }
};
class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    float area()   {
        return 3.14f * radius * radius;
    }

    float perimeter()   {
        return 2 * 3.14f * radius;
    }
};

int main() {
    Rectangle rectangle(4, 5);
    Circle circle(3);
    Shape *shape1 = &rectangle;
    Shape *shape2 = &circle;
    cout << "Rectangle Area: " << shape1->area() <<endl;
    cout << "Rectangle Perimeter: " << shape1->perimeter() <<endl;

    cout << "Circle Area: " << shape2->area() << endl;
    cout << "Circle Perimeter: " << shape2->perimeter() << endl;

    return 0;
}
