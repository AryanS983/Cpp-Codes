#include <iostream>
#include <cmath>
using namespace std;

class calculator{
    protected:
        int a,b;
    public:
        //Friend class sirf  private data ko access karne ka permission deta hai funtions ko nhi.....
        calculator (int x, int y){
            a=x;
            b=y;
        }
        
        int add(){
            return a+b;
        }
        int sub(){
            return a-b;
        }
        int multiply(){
            return a*b;
        }
        float divide(){
            return (float)a/b;
        }
        
        void displaycalc(){
            cout << "Add " << add() << endl;
            cout << "sub " << sub() << endl;
            cout << "Mulatiply " << multiply() << endl;
            cout << "Divide " << divide() << endl;
        }
};

class sicalculator{
    protected:
        int c;
    public:
        sicalculator (int x){
            c = x;
        }
        float logy(){
            return log(c);
        }
        float sqroot(){
            return sqrt(c);
        }
        float sine(){
            return sin(c);
        }
        float cosine(){
            return cos(c);
        }
        void displaysi(){
            cout << "Log " <<logy() << endl;
            cout << "Sqrt " << sqroot() << endl;
            cout << "Sine " << sine() << endl;
            cout << "Cosine " << cosine() << endl;
        }
};

class hybridcalc : public sicalculator, public calculator {
    int d;
    public:
        hybridcalc(int x, int y, int z, int s) : calculator(x,y),sicalculator(z){
            d=s;
        }
        void displayhy(){
            cout << d << endl;
        }
};

int main(){
    // calculator obj1(1,2);
    // // obj1.displaycalc();
    // sicalculator obj2(3);
    // // obj2.displaysi();
    hybridcalc obj3(2,4,6,7);
    
    obj3.displaycalc();
    obj3.displaysi();
    obj3.displayhy();
    return 0;
}