#include<iostream>
using namespace std;
class Base{
    protected:
    int x;
    public:
    Base(int a=0){
        x=a;
    }
}; 
class Derived: public Base{
    protected:
    int y;
    public:
    
    Derived (int a){
        y=a;
    }

    Derived(int a,int b){
        x=b;
        y=a;
        cout<< x<<endl;
    }
};

int main(){
    Derived d(5,1);
}