#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int data1){
        data = data1;
        next = nullptr;
    }
    Node(int data1 , Node * next1){
        data = data1;
        next = next1;
    }
};
class Stack{
    Node*  top;
    int size1 = 0;
    public:
    Stack(){
        top = nullptr;
    }

    void push(int x){
        Node * temp = new Node(x);
        temp->next = top;
        top = temp;
        size1 ++;
    }
    
    int pop(){
        int ans = top->data;
        top = top->next;
        size1--;
        return ans;

    }
    int Top(){
        return top->data;
    }
    int Size(){
        return size1;
    }

};
int main(){
    Stack s;
    s.push(9);
    s.push(8);
    s.push(34);
    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;
}