#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], vector<int>&ans, int size, int index){
       if(index >= size){
        return ;
       }
       if( arr[index] % 2 == 0){
        ans.push_back(arr[index]);
       }
      
       solve(arr, ans , size, index+1);
}
int main()  

// traverse the array if you find even no. then insert it in a vector array  
{
int arr[] = { 10,43,21,4,67,8};

vector<int>ans;
    int size = 6;
    int index = 0;
    solve(arr, ans, size, index);

    //printing vector
    for(auto num : ans){
        cout<< num <<" ";
    }
    
 return 0;
}