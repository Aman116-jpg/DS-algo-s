#include<iostream>
using namespace std;
int main(){
    // change the odd indexed elements to its second multiple
    // and increment all even indexed value by 10.

     int n;

    cin>>n;
    cout<<"the size of array is "<<n<<endl;
     int arr[n] = {2,4,5,6,9};
     for(int i=0; i<n; i++){
        if(i%2!=0){
            arr[i] = arr[i]*2;
        }
        else{
            arr[i] = arr[i]+10;
        }

     }
     for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
     }
    
     


}