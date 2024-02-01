#include<bits/stdc++.h>
using namespace std;

int print(int index,int s, int sum, int arr[], int n){
    if(index == n){
        
        if(s == sum)return 1; 
        else return 0;
    }

    s+= arr[index];
    int l = print(index+1, s, sum, arr, n);
    s-= arr[index];

    int r= print(index+1, s, sum, arr, n);
    return l+r;
}
int main()

{
    // print no. of subsequences whose sum is equal to k
    int arr[] = {1,2,1};
    int n= 3;
    int sum = 2;
    cout<<print(0, 0, sum, arr, n);

 return 0;
}
