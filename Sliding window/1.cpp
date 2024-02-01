#include<bits/stdc++.h>
using namespace std;
int main()
{
    // find the sub-array with max value of given size k

    int arr[8] = {5,6,9,3,5,20,4,6};
    int n = 8;
    int k = 3;
    int maxi = 0;
    int i=0;
    int j=0;
    int sum = 0;
    while(j<n){
        sum = sum + arr[j];
        if(j-i+1 <k){
            j++;
        }
        else if(j-i+1 == k){
            maxi = max(maxi, sum);
            sum = sum-arr[i];
            i++;
            j++;
        }

    }
    cout<<maxi;

 return 0;
}