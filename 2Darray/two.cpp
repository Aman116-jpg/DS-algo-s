#include<iostream>
using namespace std;
int main(){
    int arr[4][3];
    int rows = 4;
    int col = 3;
    
    //row wise input lerhe
    for(int i=0; i<rows; i++) {
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
        
    }

        //printing row wise 
     for(int i=0; i<rows; i++) {
        for(int j=0; j<col; j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    
        //printing col wise 
        cout<<"printing col wise"<<endl;  
     for(int i=0; i<col; i++) {         // when rows and col are not equal
        for(int j=0; j<rows; j++){
        cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}