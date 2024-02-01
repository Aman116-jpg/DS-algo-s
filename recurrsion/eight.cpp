#include<bits/stdc++.h>
using namespace std;

void func(int  arr[], int size, int index){
    if(index>= size)return;

    arr[index] = 2* arr[index];
    func(arr, size, index+1);
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;
    func(arr, size, index);

    for(auto num:arr){
        cout<<num<<" ";
    }

































 return 0;
}