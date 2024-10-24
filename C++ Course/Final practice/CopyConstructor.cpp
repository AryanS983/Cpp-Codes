#include <iostream>
using namespace std;

class bye {
    int y;
    public:
    friend class hello;
        bye(int a){
            y=a;
        }
};

class hello{
    int x;
    public:
        hello(int a){
            x=a;
        }
        hello(hello &obj){
            x=obj.x;
        }

        hello(bye &obj1){
            x= obj1.y;
            cout << "I want to suck your ";
        }
        void display(){
            cout << x<< endl;
        }
        int access(bye b1){
            return b1.y;
        }

};

int main (){
    hello women1(2);
    // hello * women;
    // women = &women1;
    // women->display();
    women1.display();
    hello sexy(women1);
    sexy.display();
    bye women2(80085);
    hello women3 (women2);
    women3.display();
    return 0;
}