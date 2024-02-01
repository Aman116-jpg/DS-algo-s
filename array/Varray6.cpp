#include<iostream>
#include<vector>
using namespace std;
int main(){

    // sorting 0's on the left and the 1's on the right side


     vector<int>arr{0,1,0,1,1,0,1,0,1,1};

    //  int start = 0;
    //  int end = arr.size() - 1;
    //  int i = 0;

    //  while(i != end ){ 
    //     if(arr[i] ==0){
    //         swap(arr[start], arr[i]);
    //         i++;
    //         start++;

    //     }
    //    else if(arr[i] == 1){
    //         // swap from right
    //         swap(arr[i] , arr[end]);
    //         end--;
            
    //     }
    //  }
    //   for(auto value: arr){
    //     cout<<value<<" ";
    // }



  // approach 2 --> same as we did in shift neg and positive
    int  i=0; 
    int j=0; 
    while(i<arr.size()){
        if(arr[i] == 0){
            swap(arr[i], arr[j]);
            j++;
        }
        i++;
    }

 for(auto value: arr){
         cout<<value<<" ";
     }


}