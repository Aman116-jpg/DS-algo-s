#include<iostream>
#include<vector>
using namespace std;

 void shiftneg(int arr[], int n){
    // int j=0;
    // for(int index = 0; index<n; index++){
    //     if(arr[index]<0){
    //         swap(arr[index], arr[j]);
    //         j++;
    //     }
    // }

    int j=0;
    int i = 0;
    while((i<n)){
        if(arr[i] <0){
            swap(arr[i], arr[j]);
            j++;
           
        }
        i++;
    }
 }


int main(){
    // negative no. on the left side and pos on the right side

     
    int arr[] = {-1,-3,5,6,-4,-6,8,-2,9};
    int n = 9;
    shiftneg(arr, n);  

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


}