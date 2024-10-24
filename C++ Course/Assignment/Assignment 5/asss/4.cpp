#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person(const string& name) : name(name) {}
    virtual void displayFamily() = 0;

protected:
    string name;

public:
    const string& getName() const {
        return name;
    }
};

class Parent : public Person {
public:
    Parent(const string& name) : Person(name) {}

    void displayFamily() override {
        cout << "Name: " << getName() << endl;
    }
};

class Child : public Person {
public:
    Child(const string& name, Person* parent1, Person* parent2 = nullptr)
        : Person(name), parent1(parent1), parent2(parent2) {}

    void displayFamily() override {
        cout << "Name: " << getName() << endl;
        if (parent1 != nullptr) {
            cout << "Parent 1: " << parent1->getName() << endl;
        }
        if (parent2 != nullptr) {
            cout << "Parent 2: " << parent2->getName() << endl;
        }
    }

private:
    Person* parent1;
    Person* parent2;
};

int main() {
    Parent* A = new Parent("A");
    Parent* B = new Parent("B");
    Parent* C = new Parent("C");
    Child* D = new Child("D", A);
    Child* E = new Child("E", A);
    Child* F = new Child("F", C);

    cout << "Family Tree:" << endl;
    D->displayFamily();
    E->displayFamily();
    F->displayFamily();

    delete A;
    delete B;
    delete C;
    delete D;
    delete E;
    delete F;

    return 0;
}
