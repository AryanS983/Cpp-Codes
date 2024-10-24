#include <iostream>
using namespace std;

int main(){
    int i;
    for (i=1; i<=10;i++){
        cout << i+i << endl;
    }
    i=1;
    while (i<=10){
        cout << i+i+i << endl;
        i++;
    }
    i=2;
    do{
        cout << "Hello" << i << endl;
        i++;
    }while(i<0);
    return 0;
}
