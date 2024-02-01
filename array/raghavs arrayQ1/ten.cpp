#include<iostream>
using namespace std;
int main(){


    
    // a particular element is present or not





     int arr[7] = {1,2,3,4,5,6,7};
     int x = 5;
     int idx = -1;
     bool flag = false; // false means not present
     for(int i=0; i<7; i++){
        if(arr[i] ==x){
            flag = true; // true means present
            idx = i;
            break;
        }
     }
     if(flag == false){
        cout<<x<<" "<<"is not present in the array"<<endl;

     }else{
        cout<<x<<" "<<"is prersent in the array and its index is "<<idx;
     }
}
