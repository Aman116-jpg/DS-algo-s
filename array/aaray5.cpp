#include<iostream>
using namespace std;


void crazy(int arr[], int size){
    int i=0; 
    int j = size-1;
    while(i<j){
        
        cout<< arr[i] <<" "<< arr[j] <<endl;
        i++;
        j--;
    }
    if(i == j) cout<<arr[i];
}
 int main(){

    // printing array pehle start wala phir end ......goes on
    int arr[11] = {1,3,4,55,6,77,8,9,12,4,7};
    int size = 11;
    crazy(arr, size);

    // int start = 0;
    // int end = size - 1;

    // while(true){
    //     if(start>end)
    //     break;

    //     if(start==end){
    //         cout<<arr[start]<< " ";  // odd value k liye problem ko tackle krne k liye
    //     }

    //     cout<<arr[start]<<" ";
    //     cout<<arr[end]<<" ";
    //     start++;
    //     end--;


    // } 
 }