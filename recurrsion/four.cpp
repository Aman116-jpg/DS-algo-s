#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[], int size, int index){
    // base case
    if(index >= size){
        return;
    }
    // processing 
    cout<< arr[index] <<" ";

    // recursive caLL
    printarray(arr, size, index+1); 
}
int main()

// printing arrrY

{ int arr[] = {10,20,30,40,50};
int size = 5;
int index = 0;
printarray(arr, size, index);

 return 0;
}






// pritning in reverse order


/*#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[], int size, int index){
    // base case
    if(index >= size){
        return;
    }
   
    

    // recursive caLL
    printarray(arr, size, index+1); 

    cout<< arr[index] <<" ";
}
int main()

// printing arrrY

{ int arr[] = {10,20,30,40,50};
int size = 5;
int index = 0;
printarray(arr, size, index);

 return 0;
}*/