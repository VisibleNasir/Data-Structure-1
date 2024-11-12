#include <iostream>
using namespace std;

void selectionSort1(int arr1[] , int n){
    for(int i=0; i<n; i++){
        int small = 20;
        int k;
         for(int j = n-1; j>=i; j--){
            if(arr1[j]<small){
                small = arr1[j];
                k = j;
            }
            
         }
        int temp = arr1[i];
        arr1[i] = small;
        arr1[k] = temp;
    } 
}
int main(){
    int arr1[] = {2,1,4,3,9,6};
    int n = 6;
    selectionSort1(arr1 , n);
    for(int i=0; i<n;i++){
        cout<<arr1[i]<<" ";
    }

}