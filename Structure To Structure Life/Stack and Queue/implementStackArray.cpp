
#include<bits/stdc++.h>
using namespace std;

class Stack{
    int size;
    int * arr;
    int top;
    public:
        Stack(){
            top = -1;
            size = 100;
            arr = new int[size];
        }
    void push(int x){
        top++;
        arr[top] = x;
    }
    int pop(){
        int ans = arr[top];
        top--;
        return ans;
    }
    int Top(){
        return arr[top];
    }

    int size(){
        return top + 1;
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<< s.pop()<<endl;
    cout<<s.Top() ;

}