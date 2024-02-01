#include<iostream>
using namespace std;
int main(){
     // total triplets batao jinka sum given no. x ke equal hai
    int arr[8] = {1,2,3,4,5,6,7,8};
    int totaltriplets = 0;
    int x = 12;
    for(int i=0; i<8; i++){
        for(int j =i+1; j<8; j++){
            for(int k=j+1; k<8; k++){
               
              if(arr[i]+arr[j]+ arr[k] == x){
                totaltriplets++;
               cout<<arr[i]<<" "<< arr[j]<<" "<<arr[k]<<" "<<endl;;
           } 

            }
            
        }
    }
    cout<<totaltriplets<<endl;
}







