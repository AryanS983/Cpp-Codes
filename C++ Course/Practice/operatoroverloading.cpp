#include <iostream>
using namespace std;

class complex;

class real{
    int r;
    public:
        friend class complex;
        real (int a){
            r=a;
        }
        // unary overload
        void operator ++ (){
            r=r+1;
        }
        void display(){
            cout << r<< endl;
        }
};

class complex {
    int  r;
    int  c;
    public:
        
        // binary overloading
        complex(int a=0, int b=0){
            r=a;
            c=b;
        }
        complex operator + (complex obj){
            complex temp;
            temp.r = r + obj.r;
            temp.c = c + obj.c;
            return temp;
        }

        complex operator - (real obj){
            complex temp;
            temp.r = r - obj.r;
            return temp;
        }

        void display(){
            cout << r << " + "<< c << " i"<< endl;
        }
};

int main () {
    real obj1(10);
    ++obj1;
    obj1.display();
    complex obj2(12,6);
    complex obj3(5,4);
    complex obj4 = obj2 + obj3;
    complex obj4 = obj2 - obj1;
    obj4.display();
    return 0;
}