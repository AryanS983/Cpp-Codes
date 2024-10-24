#include <iostream>
using namespace std;

int main () {
    int a;
    cout << "Enter the value of a ";
    cin >> a;
    // scanf ("%d", &a);
    // if (a< 10){
    //     cout << "a < 10"<< endl;
    // }
    // else if(a>=10 && a<20) {
    //     cout << "a between 10 and 20";
    // }
    // else {
    //     cout << "ma chuda";
    // }
    switch (a){
        case 1:
            cout << "a = 1"; break;
        case 2:
            cout << "a = 2"; break;
        case 3:
            cout << "a = 3"; break;
        case 4:
            cout << "a = 4"; break;
        case 5:
            cout << "a = 5"; break;
        case 6:
            cout << "a = 6"; break;
        default:
            cout << "f off";
    }

    return 0;
}