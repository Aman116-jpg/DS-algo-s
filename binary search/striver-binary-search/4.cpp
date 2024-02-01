#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int findMin(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    int ans =  INT_MAX;
    int index = -1;


     while (low <= high) {
        int mid = (low + high) / 2;

         //search space is already sorted
        //then arr[low] will always be
        //the minimum in that search space:
        if (arr[low] <= arr[high]) {
            if(arr[low]< ans){
                index = low;
                ans = arr[low];
            }
           
            break;
        }      //for optimised soln

        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            // keep the minimum:
            if(arr[low]< arr[mid]){
                index = low;
                ans = arr[low];
            }
            

            // Eliminate left half:
            low = mid + 1;
        }
                else { //if right part is sorted:

            // keep the minimum:
            if(arr[mid]<ans){
                index = mid;
                ans = arr[mid];
            }
            

            // Eliminate right half:
            high = mid - 1;
        }

     }
     return index;

}



int main(){
    // how many times array have been rotated

    // in previous problem we solved smalllest elemnt in array but if we look clearly the index number of smallest number will give no. times  the array is been rotated
    // we just need to to do minor chnages in prev code and store index


      vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findMin(arr);
    cout << "number of times the array is rotated is : " << ans << "\n";
    return 0;
}