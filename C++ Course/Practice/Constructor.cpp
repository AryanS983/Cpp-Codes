#include <iostream>
using namespace std;

class point {
    int x,y;
    public:
        point (int a , int b){
            x = a;
            y = b;
        }
        friend float dist(point p1, point p2);
};

float dist(point p1, point p2){
    float dis = p1.x + p2.x; 
    return dis;
}

int main (){
    point x1(2,6);
    point x2(3,7);
    cout << dist(x1, x2);
    return 0;
}