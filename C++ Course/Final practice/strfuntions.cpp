#include <iostream>
#include <string>
using namespace std;

int main(){
    string A ="hello";
    string B = "Aryan";
    cout << "Concatenation : "<<A+B<<endl;
    //Non altering methods
    cout << A.length() << endl;
    cout <<A.find("e") << endl;
    cout <<A.back() << endl;
    cout <<A.substr(1,3) << endl;
    cout <<A.empty() << endl;
    //Altering methods
    cout <<A.append(B) << endl;
    cout << A<<endl;
    A.erase(2,3);  // starting from index 2 remove 3 characters
    cout << A<<endl;
    A.insert(2,"Hero");
    cout << A<<endl;
    A.replace(2,4,"Sexy");
    cout << A<<endl;
}