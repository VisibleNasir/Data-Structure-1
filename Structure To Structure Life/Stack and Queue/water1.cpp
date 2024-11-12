#include <iostream>
using namespace std;

int main(){
    int arr1 []= {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = 12;
    int total = 0;
    int prefixmax[n];
    int suffixmax[n];
    prefixmax[0] = arr1[0];
    for(int i=1; i<n; i++){
        prefixmax[i] = max(prefixmax[i-1] , arr1[i]);
    }
    suffixmax[n-1] = arr1[n-1];
    for(int i=n-2; i>=0;i--){
        suffixmax[i] = max(suffixmax[i+1] , arr1[i]);
    }
    for(int i=0; i<n; i++){
        if(arr1[i] < Lmax && arr1[i] < Rmax)){
            total += min(leftmax, rightmax)-arr1[i];
        }
    }
}
