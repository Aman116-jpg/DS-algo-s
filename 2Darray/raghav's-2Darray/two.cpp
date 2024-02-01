#include<iostream>
using namespace std;
 int main(){
   /*
   // wap a program to add two matrix

   int a[2][2] = {2,3,4,5};
   int b[2][2] = {5,6,7,8};
 int sum[2][2];
   for(int i=0; i<2; i++){
  for(int j=0; j<2; j++){
    sum[i][j] =   a[i][j] + b[i][j];
 
         cout<<sum[i][j]<<" ";
  }
  cout<<endl;
  

   } */




/*
// wap a program to add two matrix without using any extra array

   int arr[2][2] = {2,3,4,5};
   int brr[2][2] = {5,6,7,8};
 // int sum[2][2];
   for(int i=0; i<2; i++){
  for(int j=0; j<2; j++){
   // sum[i][j] = 
  cout<< arr[i][j] + brr[i][j]<<" ";
        // cout<<sum[i][j]<<" ";
  }
  cout<<endl;
  

   }
*/
    

    int r;
    cout<<"enter the value of no. of rows "<<endl;
    cin>>r;
    int c;
    cout<<"enter the value of no. of coloumn"<<endl;
    cin>>c;

   int xxd[r][c];
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cin>>xxd[i][j];
    }
   
   }


   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cout<<xxd[i][j]<<" ";
    }
    cout<<endl;
   }

    int sum = 0;
   for(int i=0; i<r; i++){
   
    for(int j=0; j<c; j++){
        sum = sum + xxd[i][j];
     
    }
    
   }
   cout<<sum<<" ";

 }