#include <iostream>
using namespace std;

class A{
    public:
        void print(){
            cout << "I lovee my ";
        }
};

class B : public A{
    public:
        void print(){ 
            cout << " Gf ";
        }
};

int main (){
    B obj;
    A * obj1;
    obj1= &obj;
    obj1->print();
    obj.print();
}