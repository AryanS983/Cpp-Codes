#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter the value of a: "; // << is called insertion operator
    cin >>a;                          // >> is called extraction operator
    cout << "The value of a is " << a << endl;  // we can also add "\n" instead of endl for new line
    cout << "A square = " << a * a;
    return 0;
}