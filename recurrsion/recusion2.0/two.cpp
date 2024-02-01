#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int s, int e, int target){
    if(s > e){
        return -1;
    }
    int mid = s + (e-s)/2;
    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid] < target){
        
        return binarySearch(arr, mid+1, e, target);
    }
    
    
    else{
        // left me jao
       return binarySearch(arr, s, mid-1, target);
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80};
    int size = 8;
    int start = 0;

    int end = size-1;
    int target = 80;
    int found = binarySearch(arr, start, end, target);
    if(found != -1 ){
        cout<<" target found AT: "<<found<<endl;

    }else{
        cout<<"target not found"<<endl;
    }

 return 0;
}