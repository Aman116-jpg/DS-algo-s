#include<iostream>
using namespace std;
int main(){
    // write a program to print and store transpose of a matrix

     int arr[3][2] = {1,2,3,4,5,6};
     // row wise
     for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
     }


    // transpose 
      for(int i=0; i<2; i++){
         for(int j=0; j<3; j++){
             cout<<arr[j][i]<<" ";
         }
         cout<<endl;
     }

    // store the transpose and print
     int brr[2][3];
      for(int i=0; i<2; i++){
         for(int j=0; j<3; j++){
             brr[i][j] = arr[j][i];
             cout<<brr[i][j]<<" ";

        }
         cout<<endl;
     }


//          int crr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//          for(int i=0; i<4; i++){
//         for(int j=0; j<4; j++){
//             cout<<crr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// cout<<endl;

// for(int i=0; i<4; i++){
//         for(int j=0; j<4; j++){
//             cout<<crr[j][i]<<" ";
//         }
//         cout<<endl;
//     }



}