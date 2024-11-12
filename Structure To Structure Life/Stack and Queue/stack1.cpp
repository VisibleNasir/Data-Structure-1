#include<iostream>
using namespace std;

class Stack{
    int size;
    int * arr;
    int top;
    public:
    Stack(){
        top = -1;
        size = 100;
        arr = new int [size];
    }
    void push(int x){
        top++;
        arr[top] = x;
    }
    int pop(){
        int x= arr[top];
        top--;
        return x;
    }
    int Top(){
        return arr[top];
    }
    int Size(){
        return top+1;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(4);
    st.push(5);
    st.push(8);
    cout<<st.Top()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.Top()<<endl;
    
    cout<<st.pop()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
}