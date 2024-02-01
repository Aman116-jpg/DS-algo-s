#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
   /*// intersection of two array
    vector<int>arr{1,2,3,4,6,8};
    vector<int>brr{3,4,10};
    vector<int>ans;

    //outer loop for arr vectorfor
    for(int i=0; i<arr.size(); i++){
        int element = arr[i];
        // for every element run the loop on brr

        for(int j=0; j<brr.size(); j++){
            if(element==brr[j]){
                ans.push_back(element);

            }

        }
    }

    // print ans
    for(auto value: ans){
        cout<<value<<" ";
    }*/ 







    

    // agar values repeated ho toh ?

    // intersection of two array
    vector<int>arr{1,2,3,3,4,6,8};
    vector<int>brr{3,3,4,4,10};
    vector<int>ans;

    //outer loop for arr vectorfor
    for(int i=0; i<arr.size(); i++){
        int element = arr[i];
        // for every element run the loop on brr

        for(int j=0; j<brr.size(); j++){
            if(element==brr[j]){
                ans.push_back(element);
                brr[j] = INT_MIN;
                arr[i] = INT_MIN;
             
            }

        }
    }

    // print ans
    for(auto value: ans){
        cout<<value<<" ";
    }
}