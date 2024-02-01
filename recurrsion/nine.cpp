#include <bits/stdc++.h>
using namespace std;

int printarray(int arr[], int size, int index, int target)
{
    // base case
    if (index >= size)
    {
        return -1;
    }
    // processing
    if (arr[index] == target)
    { 
        cout<<"target is: "<<target<<" index is : "<<index<<endl;
      
      
    }
    
    // recursive caLL
    printarray(arr, size, index + 1, target);
}

int main()
{

    // search in an array if target found its index and print tgarget

    int arr[] = {10, 40, 30, 40, 50};
    int size = 5;
    int target = 40;
    int index = 0;
   printarray(arr, size, index, target); // Check the return value
  


    return 0;
}