#include<iostream>
#include<limits.h>
using namespace std;
int main(){

    // int arr[] ={2,4,6,1,3,7,9,12,56,43,21};
    // int size = 11;
    // int maxi = INT_MIN;
    
    // for(int i=0; i<size; i++){
    //     if(arr[i]>maxi){
    //          maxi = arr[i];

    //     }
       

    // }
    // cout<<"max no. is "<<maxi<<endl;



    int arr[] ={2,4,6,1,3,7,9,12,56,43,21};
    int size = 11;
    int mini = INT_MAX;
    
    for(int i=0; i<size; i++){
        if(arr[i]<mini){
             mini = arr[i];

        }
       

    }
    cout<<"min no. is "<<mini<<endl;

}

