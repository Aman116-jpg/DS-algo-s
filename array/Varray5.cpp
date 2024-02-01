#include<iostream>
#include<vector>
using namespace std;
int main(){
    // pairs ka sum wille be equal to a given no.
    vector<int>arr{10,20,40,60,70,50};
    vector<int>ans;
    int sum = 60;
    for(int i=0; i<arr.size(); i++){
        int element = arr[i];

        for(int j=i+1; j<arr.size(); j++){
     
        if(element + arr[j] == sum){
           cout<<"pairs found"<<" "<<element<<" "<<arr[j]<<endl;;
        }
   }
    }
   
  

}       