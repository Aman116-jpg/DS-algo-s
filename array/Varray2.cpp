#include<iostream>
#include<vector>
using namespace std;

// finding unique element in an array if all elements occurs twice

int findunique(vector<int>arr){
    int ans = 0;

    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    return ans;
}







int main(){
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;


    vector<int>arr(n);
    cout<<"enter the elements " <<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int unique_element = findunique(arr);

    cout<<"unique element is "<< unique_element <<endl;
    return 0;
    }