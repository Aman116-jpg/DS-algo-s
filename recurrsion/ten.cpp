#include<bits/stdc++.h>
using namespace std;


void find(int arr[], int size, int index, int target, vector<int> &ans){
    if(index >= size)
        return;
    if(arr[index] == target){
        ans.push_back(index);
    }
    find(arr,size, index+1, target, ans);
}
int main()
{
    // store the index of target in a vector
  


int arr[] = {10,30,49,60,30};
int size = 5;
vector<int>ans;
int target = 30;
int index= 0;
find(arr, size, index, target,ans);

for(auto num: ans)
{
    cout<<num<<" ";
} return 0;
}