#include <iostream>
using namespace std;

class A{
    public:
        void display(){
            cout << "Loda lelo ";
        }
};

class B{
    public:
        void display(){
            cout << "Kala Chut lelo";
        }
};

class C: public A, public B{
    public:
        void display(){
            A::display();
            B::display();
        }
};


int main (){
    C women;
    women.display();
}