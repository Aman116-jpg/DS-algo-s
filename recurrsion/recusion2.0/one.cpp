#include<bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int size, int index){
    if(index >= size){
        return true;
    }
    if(arr[index] >= arr[index-1]){
        // aage badh jao
        checkSorted(arr, size, index+1);
    }
    else{
        // sorted nhi hai
        return false;
    }
}
int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;
    int index = 1;
    bool isSorted = checkSorted(arr, size, index);
    if(isSorted){
        cout<<" array ius sorted "<<endl;
    }else{
        cout<<"array is not sorted "<<endl;
    }

 return 0;
}