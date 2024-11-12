#include <iostream>
using namespace std;


void insertionSort1(int arr[] , int n){
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n;j++){
            while(arr[j] < arr[j-1]){
                int temp= arr[j];
                arr[j ] = arr[j-1];
                arr[j] = temp;
            }
        }
    } 
}
int main(){
    int arr1[] = {2,1,4,3,9,6}; 
    int n = 6;
    insertionSort1(arr1 , n); 
    for(int i=0; i<n;i++){
        cout<<arr1[i]<<" ";
    }
}