#include <iostream>
using namespace std;

void bubbleSort(int arr1[] , int n){
    for(int i=0;i<n-1;i++){
        for(int j = i;j<n-i-1;j++){
            if(arr1[j] > arr1[j+1]){
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }

}
int main(){
    int arr1[] = {2,1,4,3,9,6}; 
    int n = 6;
    bubbleSort(arr1 , n); 
    for(int i=0; i<n;i++){
        cout<<arr1[i]<<" ";
    }
}