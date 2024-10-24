#include <iostream>
using namespace std;

class Cqueue{
    int front=-1;
    int rear=-1;
    int queue[10];
    public:
        bool isempty(){
            return front==-1;
        }
        bool isfull(){
            return (rear+1)%10==front;
        }
        void enqueue(int x){
            if (isempty())
                front = 0;
            if (!isfull()){
                rear =(rear+1)%10;
                queue[rear]=x;
            }
        }

        void dequeue(){
            if(front==rear){
                front=-1;
                rear=-1;
            }
            if(!isempty()){
                front=(front+1)%10;
            }
        }
        void display(){
            if (!isempty()){
                int i=front;
                while(true){
                    cout << queue[i]<<endl;
                    if(i==rear){
                        break;
                    }
                    i=(i+1)%10;
                }
            }
                
        }
        int getFront() {
            if (isempty()) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            return queue[front];
        }
};

int main(){
    Cqueue first;
    first.enqueue(10);
    first.enqueue(20);
    first.enqueue(37);
    first.enqueue(40);
    first.enqueue(53);
    // first.dequeue();
    cout<<first.getFront();
}