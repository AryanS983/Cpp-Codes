#include <iostream>
using namespace std;


int c=45;

int main() {
    int a=4,b=5,c;
    c=a+b;
    cout << "the value of c = "<< c<<endl;
    cout << "the value of global c = "<< ::c << endl;  // :: is the scope resolution operator.... used to extract the global value
    return 0;
}