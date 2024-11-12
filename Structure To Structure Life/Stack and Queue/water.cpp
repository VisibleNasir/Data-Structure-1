#include <iostream>
using namespace std;
int main(){
    int arr1 []= {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = 12;

    int Lmax= 0;
    int Rmax =0;
    int total = 0;
    int l = 0;
    int r = n-1;
    while(l<r){
        if(arr1[l]<= arr1[r]){
            if(Lmax > arr1[l]){
                total += Lmax - arr1[l];
            }else{
                Lmax = arr1[l];
            } 
            l = l+1;
        }else{
            if(Rmax > arr1[r]){
                total += Rmax - arr1[r];
            }else{
                Rmax = arr1[r];
            }
            r = r-1;
        }
    }
    cout<<"Total count is: "<<total<<endl;

}