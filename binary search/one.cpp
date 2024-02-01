#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
     int start = 0;
     int end = size -1;
    // int mid = (start + end) / 2;  // integer range se overflow hone ka khatra hai
     int mid = start + (end - start)/2 ; // to tackle the overflow problem.  ye bhi same hi formula hai solve krke dekh lo

     while(start <= end){
        int element = arr[mid];

        if(element == target){
            return mid;
        }
         if(target < element){
            //search in left
            end = mid - 1;

        }
        else{
            //search in right
            start = mid + 1;
        }
          mid = start + (end - start)/2 ;
     }

     // element not found
     return -1;

}
int main(){

    // binary search
     // search the target element 2 in the given array dhyan rahe array is sorted
    
    int arr[] = { 2,4,6,8,10,12,16};
    int size = 7;
    int target = 2;
   

    int indexoftarget = binarySearch(arr, size, target);
    if(indexoftarget == -1){
        cout<<"target not found"<<endl;
    }
    else {
        cout<<"target found at "<<indexoftarget<<" "<<"index"<<endl;
    }
    return 0;

}
