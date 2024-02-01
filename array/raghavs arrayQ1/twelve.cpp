#include<iostream>
using namespace std;
int main(){
    // finding the duplicate element
    int arr[7] = {2,33,5,6,8,7,2};
    for(int i=0; i<7; i++){
      for(int j=i+1; j<7; j++)
{
    if(arr[i] == arr[j])
   {
     cout<<"the duplicate element is "<<arr[i];
    break;  // for loop se bhi bahar ho jayega
    }
} 
   }
}