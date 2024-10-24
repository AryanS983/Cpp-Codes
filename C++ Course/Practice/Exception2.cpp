#include <iostream>
#include <string>

using namespace std;

class Exception1 {
    public:
    string what(){
        return "Exception 1 has occured";
    }
};

class Exception2 {
    public:
    string what(){
        return "Exception 2 has occured";
    }
};

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
        if(pass.length()<6){
            throw Exception1();
        }
        else if(!num) {
            throw Exception2();
        }
        else {
            cout << "Everything is ok";
        }
    }
    catch (Exception1 e) {
        cout << e.what();
    }
    catch (Exception2 e){
        cout << e.what();
    }
    return 0;
}