#include <iostream>
#include <fstream>
using namespace std;

namespace one {
    void display(){
        cout << "suck our dik";
    }
}
using namespace one;
int main(){
    string st;
    ifstream in ("fstreamdoc.txt");
    getline (in , st);
    cout << st;
    in.close();

    ofstream out("fstreamdoc.txt");
    getline(cin, st);
    out << st;
    out.close();
    return 0;
}