#include<iostream>
#include<limits.h>
using namespace std;
int main(){

    // second largest  number batao
   /* int arr[7] = {-10,-4, -200, -88, -19, -5, -12};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0; i<=6; i++){
        if(max<arr[i]){
            max = arr[i];

        }
    }
   // cout<<max;
    // max = -4
     for(int i =0; i<=6; i++){
        if(arr[i]!=max && smax<arr[i]){
            smax = arr[i];
        }
    }
    cout<<smax;*/  

    // other way to do this question

    int arr[7] = {-10,-4, -200, -88, -19, -5, -12};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0; i<=6; i++){
        if(max<arr[i]){
            smax = max;
            max = arr[i];
        } else if (smax<arr[i] && max>arr[i]) {
            smax = arr[i];
        }
    }
    cout<<smax<<endl;
    
   

}
