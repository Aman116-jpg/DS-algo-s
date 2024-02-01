#include<iostream>
using namespace std;


int main(){
    // searching the max element
   
   int arr[7] = {1,3,4,4,6,7,9,};

  // int max = -1; // jab array ke elements -ve me honge toh problem hogi  
  int max = arr[0]; // negative ke liye bhi chlega lekin index 1 se code chalana
   for(int i= 1; i<7; i++){
    if(max<arr[i]){
        max = arr[i];
    }
   }
   cout<<max<<endl;

}