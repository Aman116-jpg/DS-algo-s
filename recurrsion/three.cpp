#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n){
    if(n ==0){
        cout<< arr[0]<<" ";
        return;
    }
    printarray(arr, n-1);  // for straight printing 
    cout<<arr[n]<<" ";

    // cout<<arr[n]<<" ";
    //  printarray(arr, n-1); // for reverse printing

}
int main()
{ 
    int arr[8] = {10,20,30,40,50,60,70,80};
    int n = 8; //  index no n-1  tk print krwana hai
    printarray(arr, n-1);
 return 0;
}