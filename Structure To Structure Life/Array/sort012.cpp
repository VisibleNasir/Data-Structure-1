#include <iostream>
using namespace std;

void Sorting(int arr[] , int n){
    int cnt0 =0;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i=0; i<n;i++){
        if(arr[i]==0){
            cnt0+=1;
        }else if(arr[i]==1){
            cnt1+=1;
        }else{
            cnt2+=1;
        }
    }
    for(int i=0;i<cnt0;i++){
        arr[i] =0;
    }
    for(int i=cnt0;i<cnt1+cnt0;i++){
        arr[i] =1;
    }
    for(int i=cnt0+cnt1;i<n;i++){
        arr[i] =2;
    }
}

int main(){
    int arr1[] = {0,2,1,0,2,1}; 
    int n = 6;
    Sorting(arr1 , n); 
    for(int i=0; i<n;i++){
        cout<<arr1[i]<<" ";
    }
}