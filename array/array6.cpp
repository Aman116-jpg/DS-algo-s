#include<iostream>
using namespace std;
int main(){

    //printing reverse array

 int arr[10] = {1,3,4,55,6,77,8,9,12,4};
    int size = 10;


    int start = 0;
    int end = size - 1;

    while(start<=end){
       
        
        swap(arr[start], arr[end]);
        
        start++;
        end--;
      }
         for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
         }

cout<<endl;

    
/*int brr[10] = {1,3,4,55,6,77,8,9,12,4};
  for(int i=9; i<10; i--){
    if(i==-1){
        break;
    }
    cout<<brr[i]<<" ";
  }*/


  

}
