#include <bits/stdc++.h>
using namespace std;

// void solve(int arr[], int size){
//     cout<<"size of array inside solve func: "<<sizeof(arr)<<endl;  // yaha size of arr 4 print hoga kyuki int* pointer pass hua hai by reference aur pointer address same hi print krta hai depending upon system
// }

void solve(int *arr, int size)
{
    cout << "size of array inside solve func: " << sizeof(arr) << endl; // hm int arr[] ke jgh int *arr bhi likh sakte hai
                                                                        // dono hi cases me pointer pass hota hai jiske andar arr[0] waale ka address hota hai
    cout << arr << endl;                                                // arr[0] wale ka address
    cout << &arr << endl;                                               // iski value alag print hogi than others kyuki ek ek pointer iska khud ka address hoga
    cout << *arr << endl;                                               // arr[0] wale ki value

    *arr = *arr + 1;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    cout << "size of arr" << sizeof(arr) << endl;
    cout << arr << endl;  // base address
    cout << &arr << endl; // base address
    solve(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}