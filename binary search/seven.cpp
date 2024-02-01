 #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int peakindex(vector<int>arr){
    int start = 0;
    int end  = arr.size()-1;
    int mid = start + (end - start)/2 ;
    while(start<end){
        if(arr[mid] < arr[mid + 1]){
            //right search
            start = mid + 1;

        }else {
            end = mid;
        }
         mid = start + (end - start)/2 ;
    }
    return start;
}

int main(){
    // find peak index in a mountain array

    vector<int>arr {2,4,5,9,7,4,3};
    int ans = peakindex(arr);

    cout<<  "the peak element is at index  no. "<<ans <<endl;
    return 0;
}