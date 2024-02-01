#include<iostream>
using namespace std;
int main(){

    // sorting '0s ansd 1's and 2's without using sort fn


   int arr[12] = {0,1,2,0,1,2,1,2,0,0,0,1};

   int count0 = 0;
   int count1 = 1;
   int count2 = 2;
   for(int i=0; i<12; i++){
    if(arr[i]==0){
        count0++; }
        else if(arr[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    
   }
   for(int i=0; i<count0; i++){
       arr[i]=0;

   }
   for(int i=count0; i<count0 + count1; i++){
    arr[i]=1;
   }
   for(int i=count0 + count1; i<12; i++){
    arr[i]=2;
   }

    for(int i=0; i<12; i++){
        cout<<arr[i]<<" ";
    }
}