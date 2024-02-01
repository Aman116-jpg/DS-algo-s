#include<iostream>
#include<vector>
#include<limits.h>
#include<cmath> 
#include<algorithm> 
using namespace std;


int sumByD(vector<int> &arr, int div) {
    int n = arr.size(); //size of array
    //Find the summation of division values:
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ceil((double)(arr[i]) / (double)(div));
    }
    return sum;
}

int smallestDivisor(vector<int>arr, int limit){
    int n = arr.size();
    if (n > limit) return -1;
    int low = 1, high = *max_element(arr.begin(), arr.end());  //predef fn hai max search krne k liye

        //Apply binary search:
    while (low <= high) {
        int mid = (low + high) / 2;
        if (sumByD(arr, mid) <= limit) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;




}

int main(){

    /*Find the Smallest Divisor Given a Threshold
Problem Statement: You are given an array of integers
 ‘arr’ and an integer i.e. a threshold value ‘limit’. 
 Your task is to find the smallest positive integer divisor, 
 such that upon dividing all the elements of the given array by it,
  the sum of the division’s result is less than or equal to the given threshold value.

*/


     vector<int> arr = {1, 2, 3, 4, 5};
    int limit = 8;
    int ans = smallestDivisor(arr, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}