#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

int main(){
    string input;
    string alphabets;
    string numbers;

    
    cout << "Enter a string: ";
    cin >> input;

   
    for (char ch : input) {
        if (isdigit(ch)) {
            numbers += ch;
        } else if (isalpha(ch)) {
            alphabets += ch; 
        }
    }

    cout << "Alphabets: " << alphabets << endl;
    cout << "Numbers: " << numbers << endl;

    cout << alphabets+numbers+"\n";
    int n = stoi(numbers);
    cout << typeid(n).name()<<endl;

}