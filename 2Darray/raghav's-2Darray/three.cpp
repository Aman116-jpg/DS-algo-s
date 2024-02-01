#include<iostream>
#include<limits.h>

using namespace std; 
int main(){

    // print max element in  a matrix
//     int arr[3][3] = {1,2,3,4,5,4444,7,8,20};
//      int max = INT_MIN;
       // int minRow = -1;
//      for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//              if(max < arr[i][j]){
//                 max = arr[i][j];
                  //  minRow = i;

//              }
//         }
//      }
// cout<<max;
  //cout << "Row number: " << minRow << endl;


 // print min element in  matrix

 int arr[3][3] = {1,2,3,4,5,4444,7,8,20};
     int min = INT_MAX;
     int minRow = -1;
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
             if(min > arr[i][j]){
                min = arr[i][j];
                minRow = i;

             }
        }
     }
cout<<min<<endl;
cout << "Row number: " << minRow << endl;
}