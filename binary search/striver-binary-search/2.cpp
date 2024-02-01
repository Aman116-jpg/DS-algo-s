#include<iostream>
#include<vector>
using namespace std;


int search(vector<int>arr,  int target){
      int n = arr.size();
      int start = 0;
      int end = n-1;
      while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target){
            return true;
        }

         if (arr[start] == arr[mid] && arr[mid] == arr[end]) {
            start = start + 1;
            end = end - 1;
            continue;
        }


        if(arr[start] <= arr[mid]){
            if(arr[start] <= target && target <= arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }

        }
        else {
                if(arr[mid] <= target && target <= arr[end]){
                    start = mid + 1;
                }
                 else{
                    end = mid - 1;
                }
            }
        }
        return false;
      }









int main(){
    // search in rotated sorted array with repeating elements


   // remember yaha par index return nhi hoga agar target present hai to true else false

    vector<int>arr{7,8,1,2,3,3,3,4,5,6};
    
    int target = 3;
    bool ans = search(arr, target);
   if(ans == true){
    cout<<"targey element is present"<<endl;
   }
   else{
    cout<<"targey element is not present"<<endl;
   }
}