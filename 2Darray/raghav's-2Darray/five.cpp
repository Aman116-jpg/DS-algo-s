#include<iostream>
using namespace std;
int main(){
    // wap to rotate a matrix by 90 degree


     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
     // row wise
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
     }

      // transpose
      for(int i=0; i<3; i++){
         for(int j=0; j<3; j++){
             cout<<arr[j][i]<<" ";
         }
         cout<<endl;
     }

      // rotate

      for(int i=0; i<3; i++){
        int j = 0; 
        int k = 2;  // traversing in col
        while(j<k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
      }
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
}