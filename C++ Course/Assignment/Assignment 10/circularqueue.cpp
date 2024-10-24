#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *queue;
    int front;
    int rear;
    int capacity;

public:
    CircularQueue(int c) {
        capacity = c;
        queue = new int[capacity];
        front = -1;
        rear = -1;
    }

    ~CircularQueue() {
        delete[] queue;
    }

    bool enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return false;
        }

        if (isEmpty()) {
            front = 0;
        }

        rear = (rear + 1) % capacity;
        queue[rear] = value;
        return true;
    }

    bool dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return false;
        }

        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
        return true;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return queue[front];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % capacity == front;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear) break;
            i = (i + 1) % capacity;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Queue elements: ";
    q.display();

    q.dequeue();
    q.dequeue();

    cout << "Queue elements after two dequeues: ";
    q.display();

    q.enqueue(60);
    q.enqueue(70);

    cout << "Queue elements after enqueuing 60 and 70: ";
    q.display();

    while (!q.isEmpty()) {
        cout << "Front element is: " << q.getFront() << endl;
        q.dequeue();
    }

    return 0;
}
