#include<iostream>
using namespace std;

// agar array ko function me pass kroge toh koi copy create nhi hogi waha par actual array k andar changes honge 
// isi ko ham pass by reference kehte hai ,array k andar pass by value kaam nhi krtui 

void printarray(int arr[], int size){
        
        for(int i =0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}


void inc(int arr[], int size){
    arr[0] = arr[0] + 10;
    printarray(arr, size);
}









int main(){
    int arr[] = {5,6};
    int size = 2;
    inc(arr, size);  // dhyan rahe kbhi bhi kisi fn ke andar array pass krre hai to uska size bhi pass krna padega coz it is a good practice
    printarray(arr, size);


}