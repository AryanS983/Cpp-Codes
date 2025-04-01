#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    void push_back(int data){
        Node* temp =new Node(data);
        if(head == NULL){
            head =temp;
            tail =temp;
            return;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }

    void push_front(int data){
        Node* temp = new Node(data);
        if(head ==NULL){
            head = temp;
            tail = temp;
        }
        else{
            temp->next = head;
            head= temp;
        }
    }

    void pop_back(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        else{
            Node* temp = head;
            while(temp->next->next!=NULL){
                temp= temp->next;
            }
            
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
    }

    void pop_front(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        else{
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void print(){
        Node*  temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};

int main(){
    List l;
    l.push_front(1);
    l.push_front(2);
    l.push_back(3);
    l.push_front(4);
    l.push_front(5);
    l.pop_back();
    
    l.print();
    return 0;
}