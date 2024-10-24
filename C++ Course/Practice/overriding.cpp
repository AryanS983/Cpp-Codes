#include <iostream>
using namespace std;

class A{
    public:
    virtual void print(){
        cout<< "Im A"<<endl;
    }
};

class B : public A{
    public:
    void print(){
        // A::print();
        cout<< "Im B"<<endl;
    }
};

int main () {
    A* obj;
    B obj1;
    obj = &obj1;
    obj->print();
    obj1.A::print();
    return 0;
}
