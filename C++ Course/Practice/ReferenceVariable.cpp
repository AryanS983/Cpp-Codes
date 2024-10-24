#include <iostream>
using namespace std;

void swap(int &a , int &b){         // call by  reference c++ exclusive
    int temp = a;
    a = b;
    b = temp;
}

int & reference(int &a){        // returning a reference variable
    return a;
}

int main() {
    int x=1,y=2;
    int &s = x;              // here s is the reference variable for x
    swap(x,y);
    cout << x<<y << s;
    reference(x)=250;
    cout << x;
    return 0;
}