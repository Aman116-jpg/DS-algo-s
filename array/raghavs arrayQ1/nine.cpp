#include<iostream>
using namespace std;


void reverse(int arr[],int i, int j){   // this fn is for reversing part of an array or whole array depends upon index passed  
     
    while(i<j){

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j ] = temp;
        i++;
        j--;
    } 

}


int main(){
    // rotate an array by k steps where k is a +ve no.


        int arr[7] = {1,2,3,4,5,6,7};
        int n = 7; //size
        int k =3;

        k =k%n;
        reverse(arr, 0, n-1);
        reverse(arr, 0, k-1);
        reverse(arr, k, n-1);
        for (int i=0; i<=6; i++){
            cout<<arr[i]<<" ";
        }













}