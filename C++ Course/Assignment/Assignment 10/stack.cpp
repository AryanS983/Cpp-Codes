#include <iostream>
using namespace std;

class stack{
    
    public:
        int arr[10];
        int i=0;
        bool isempty(){
            return i==0;
        }
        bool isfull(){
            return i>=10;
        }
        void push(int x){
            if(!isfull())
                arr[i++] = x;
        }
        void pop(){
            if (!isempty()){
                i=i-1;
            }
        }
        void display(){
            for (int j=0; j<i ;j++){
                cout << arr[j]<< endl;
            }
        }
};

int main (){
    stack first;
    first.push(10);
    first.push(20);
    first.push(37);
    first.push(40);
    first.push(53);
    first.pop();
    first.display();
}