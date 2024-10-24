#include <iostream>
using namespace std;

class base {
    protected:
        int a;
    public:
        base (int x){
            a=x;
        }
        virtual void print() = 0;

        void print1(){
            cout << "This pointer"<<endl;
        }
};

class derived : public base {
    protected:
        int b;
    public:
        derived (int t, int y): base (t){
            b=y;
        }
        void print() {
            cout << "Hello " << a<< endl;
        }
        void print1(){
            cout << "This pointer 2"<<endl;
        }
};

int main () {
    base * obj;
    derived obj1(2,4);
    obj = &obj1;
    obj->print();
    obj->print1();

    derived * pointD;
    pointD= &obj1;
    pointD->print();
    pointD->print1();
    return 0;
}