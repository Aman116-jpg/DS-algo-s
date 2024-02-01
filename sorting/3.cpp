#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    // INSERTION SORT

    vector<int>arr{10,1,7,6,14,9};
    int n = arr.size();
    for(int round = 1; round<n; round++){
        //step a - fetch
        int value=arr[round];
        // compare
        int j = round-1;

        for(; j>=0; j--){
            if(arr[j]>value){
                //shift
                arr[j+1] = arr[j];
                           }
                           else{
                            break;
                           }
        }
        arr[j+1] = value;

    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}