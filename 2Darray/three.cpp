#include<iostream>
using namespace std;


bool findkey(int arr[][3], int rows, int col, int key){
         for(int i=0; i<rows; i++){
            for(int j=0; j<col; j++){
                if(arr[i][j] == key){
                    return true;
                }
            }
         }
}







void printsum(int arr[][3], int rows, int col){  // arr ke pehle wale bracket ko choodkr baki sare bracket ke andar value deni padegi
           for(int i=0; i<rows; i++){
            int sum=0;
            for(int j=0; j<col; j++){
                sum += arr[i][j];

            }
            cout<<sum<<endl;
           }
}






int main(){
     int arr[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {1,2,3}};
    int rows = 4;
    int col = 3;
    
    //row wise input lerhe
   

        //printing row wise 
     for(int i=0; i<rows; i++) {
        for(int j=0; j<col; j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // printing sum row wise
    printsum(arr, rows, col);

    // linear search in 2D ARRAY
    int key = 6;
 bool ans = findkey(arr, rows, col, key);
 if(ans == 1){
    cout<<"pakda gaya";  // present
 }
    
  
}