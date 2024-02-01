#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[5] = {1,2,3,4,5};

    //pointer to an array
    int *ptr1 = arr;
   //int *ptr = &arr; // int *ptr = &arr;: You're trying to assign the address of an array to a pointer, which is not allowed.

   //pointer to an array
  int (*ptr)[5] = &arr; // 
   cout<< (*ptr)[0];   //This will print the value 1.



  

   // array of pointer
  // int num[4] = {1, 2, 3, 4};
  // // brr is an array of pointers, har index par pointer hogi
  //   int *brr[4] = {&num[0], &num[1], &num[2], &num[3]};
  //   cout << *brr[0]; // This will print the value 1.
 return 0;
}