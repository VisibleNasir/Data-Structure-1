#include<iostream>
using namespace std;

void bubbleSort1(int *arr1 , int n){
    for(int i=0; i<n-1;i++){
        for(int j = i; j<n-i-1; j++){
            if(arr1[j]> arr1[j+1]){
                swap(arr1[j] , arr1[j+1]);
            }
        }
    }
}

int main(){
    int arr1[] = {1,4,8,5,3};
    int n = 5;
    bubbleSort1(arr1,n);
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
}