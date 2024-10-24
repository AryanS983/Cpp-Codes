#include<iostream>

using namespace std;

class fun_overloading{
public:
  void display(int i){
    cout<<"The value is "<< i << endl;
    }
  void display(double d){
    cout<<"The value is "<< d << endl;
  }
  void display(char ch){
    cout<<"The value is "<< ch << endl;
  }
};

int main(){
  fun_overloading obj;
  obj.display(10);
  obj.display(2.9);
  obj.display('a');
  return 0;
}
