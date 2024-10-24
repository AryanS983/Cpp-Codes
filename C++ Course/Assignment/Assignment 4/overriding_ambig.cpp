#include<iostream>
using namespace std;

class A{
public:
void func(){
  cout<< "I am in class A"<< endl;
  }
};

class B{
  public:
  void func(){
    cout<< "I am in class B" << endl;
  }
};

class C: public A, public B{
  public:
    void func(){
      B :: func();
    }
};

int main(){
  C obj;
  obj.func();
  return 0;
}
