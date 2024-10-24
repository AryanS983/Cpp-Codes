#include <iostream>
using namespace std;

void change(int &x){
    x=10;
}

int main (){
    int list[10]={9,3,4,8,5,7};
    int* a = list;
    for (int i=0; i<6; i++){
        cout << *a <<endl;
        a++; 
    }
    int x=5;
    change(x);
    cout << x;
}
