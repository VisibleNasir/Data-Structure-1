#include <iostream>
using namespace std;

class Queue{
    int front;
    int rear;
    int size ;
    int *arr;
    int size1;
    public:
    Queue(){
       front = rear = -1;
       size = 100;
       arr = new int[size]; 
    }
    void Enqueue(int x){
        if(rear == -1){
            front = 0;
            rear =0;
            
        }else{  
            rear ++;
        }
        size1++;
        arr[rear] = x;
    }
    int pop (){
        int ans = arr[front];
        front++;
        size1--;
        return ans;
    }
    int Top(){
        return arr[front];

    }
    int Size(){
        return size1;
    }
};
int main(){
    Queue q;
    q.Enqueue(10);
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    cout<<q.Top()<<endl;
    q.pop();
    cout<<q.Top()<<endl;

}