#include<iostream>
using namespace std;

void printarr(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int linearSearch(int arr[],int n ,  int target){
    for(int i=0; i<n;i++){
        if(arr[i]== target){
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[] , int n, int target){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid] == target)  return mid;
        if(arr[mid]< target){
            low = mid + 1;
        }else{
            high = mid -1;
        }
    }
    return -1;
}
int main(){
    int arr1[] = {1,2,3,4,5};
    int n = 5;
    cout<<"Printing the array: ";
    printarr(arr1 , n);
    int ans = linearSearch(arr1 , n , 5);
    cout<<"Answer is: "<<ans;
    cout<<endl;
    int ans1 = binarySearch(arr1 , n , 1);
    cout<<"Answer is: "<<ans1;

}