#include<bits/stdc++.h>
using namespace std;


void insert(vector<int>&arr, int temp){
    if(arr.size() == 0 || arr[arr.size()-1] <= temp){
        arr.push_back(temp);
        return;
    }
    int val = arr[arr.size()-1];
    arr.pop_back();
    insert(arr,temp);
    arr.push_back(val);
    return;
}
void sort(vector<int>&arr){
    // base condition
    if(arr.size() == 1){
        return;
    }
    int temp = arr[arr.size()-1];
    arr.pop_back();
    sort(arr);
    insert(arr,temp);
}
int main()
{
    vector<int>arr{3,4,5,2,1,7,8,2,0,1};
    sort(arr);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
 return 0;
}