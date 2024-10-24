#include <iostream>
using namespace std;

template<class T1>
T1 add (T1 &a, T1&b){
    T1 c=a+b;
    return c;
}

template<class T, class TT>
class A{
    T a;
    TT b;
    public:
        A(T x, TT y){
            a=x;
            b=y;
        }
        void display(){
            cout << a<<" "<< b<<endl;
        }
};

template <class X, int lol>
class C{
    X t;
    public:
        C(X s){
            t=s;
        }
        void print(){
            cout << t*lol;
        }
};
int main (){
    int a=10, b=20;
    int c=  add(a,b);
    cout << c<<endl;
    A <int,float> obj(10,3.14);
    obj.display();
    C<int,80>obj2(20);
    obj2.print();
    return 0;
}