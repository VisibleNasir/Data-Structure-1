#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data1){
        data = data1;
        next = nullptr;
    }
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }
};

class Queue{
    Node* front ;
    Node* rear;
    int size1 =0;
    public:
    Queue(){
        front = nullptr;
        rear = nullptr;
    }

    void push(int x){
        Node* temp = new Node(x);
        if(rear == nullptr){
            rear = temp;
            front = temp;
        }
        else{
            rear->next = temp;
            rear = temp;
        }
        size1++;
    }
    int pop(){
        int ans = front->data;
        front  = front->next;
        size1--;
        return ans;
    }
    int Top(){
        return front->data;
    }
    int Size(){
        return size1;
    }
};

int main(){
    Queue q1;
    q1.push(111);
    cout<<q1.Top()<<endl;
    q1.push(10);
    q1.push(8);
    q1.pop();
    cout<<q1.Top()<<endl;
    q1.pop();
    cout<< q1.Size()<<endl;
    
}