#include<bits/stdc++.h>
using namespace std;

void minArray(int arr[], int size, int index, int & mini){
       if(index >= size){
        return ;
       }
       if(arr[index] < mini){
        mini = arr[index];
       }
       minArray(arr, size, index+1, mini);
}
int main()
{
    // min no. in an array

    int arr[] = { 10,43,21,4,67,8};
    int size = 6;
    int index = 0;
    int mini = INT_MAX;  

    // mini ko jb  fn me pass krenge toh make sure by reference hi pass krenge kyuki 
    //jb bhi kisi var ko store krwana hota hai aur hm use fn me pass krreh ho to by reference krenge tbhi hoga  

     minArray(arr, size, index, mini);
    cout<< mini <<endl;

 return 0;
}