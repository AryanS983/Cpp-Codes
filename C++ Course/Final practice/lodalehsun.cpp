#include <iostream>
using namespace std;

class Sex {
    public:
    Sex(){
        cout <<"Very happy";
    }
    Sex(Sex &obj){
        cout<< " Butt seggs";
    }
};

int main (){
    Sex first;
    Sex second=first;
    return 0;
}

