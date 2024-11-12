#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr1 []= {4,5,2,10,8};
    int n = 12;
    int nse[n] ;
    stack <int> st;

    for(int i=0;i<n;i++){
        while(!st.empty() && st.top() >= arr1[i]){
            st.pop();
        }
        nse[i] = st.empty() ? - 1: st.top();
        st.push(arr1[i]);
    }
    
    for(int i=0;i<n;i++){
        cout<<nse[i];
    }
}