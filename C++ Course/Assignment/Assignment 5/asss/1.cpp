#include <iostream>
class Animal {
public:
    virtual void makeSound() {
        std::cout << "Some generic sound\n";
    }
};
class Dog : public Animal {
public:

    void makeSound() {
        std::cout << "It's a dog!\n";
    }
};
class Cat : public Animal {
public:
    void makeSound() {
        std::cout << "It's a cat!\n";
    }
};

int main() {
    Dog dog;
    Cat cat;
    Animal *animal1 = &dog;
    Animal *animal2 = &cat;
    animal1->makeSound(); 
    animal2->makeSound(); 

    return 0;
}
