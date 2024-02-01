#include<bits/stdc++.h>
using namespace std;
int main()
{

    // largest subarray of sum k

    int arr[7] = {4,1,1,1,2,3,5};
    int maxi = 0;
    int n = 7;
    int k = 5;
    int i =0;
    int sum = 0;
    int j =0;
    while(j<n){
        sum+= arr[j];
        if(sum < k){
            j++;
        }
        else if(sum == k){
            maxi = max(maxi, j-i+1);
            j++;
        }
        if(sum > k){
            while(sum > k){
                sum-= arr[i];
                i++;
            }
            if(sum == k){
                maxi = max(maxi, j-i+1);
            }
            j++;
           

        }
        

    } cout<< maxi;
 return 0;
}



// int longestSubarrayWithSumK(vector<int> a, long long k) {
//     // Write your code here
//     int maxi = 0;
//     long long sum  =a[0];
//     int i = 0;
//     int j = 0;
//     int n = a.size();
      
//       while(j<n){
//          while(i<= j && sum > k){
//              sum-= a[i];
//              i++;
//          }
//          if( sum == k){
//              maxi = max(maxi, j-i+1);
//          }j++;
//          if (j < n) {
//              sum += a[j];
//          }
        
//       } return maxi;
// }