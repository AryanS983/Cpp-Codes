#include <iostream>
#include <string>

using namespace std;

int main (){
    try {
        string pass;
        getline(cin, pass);
        int num=0;
        for (int i =0 ; i<pass.length(); i++){
            if (isdigit(pass[i])){
                num++;
            }
        }
        if(pass.length()<6 || !num){
            throw (num);
        }
        else {
            cout << "Everything is ok";
        }
    }
    catch (int mynum) {
        cout << "Your password contains " << mynum << "numbers";
    }
    return 0;
}