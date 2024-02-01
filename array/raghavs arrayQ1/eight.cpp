#include <iostream>
using namespace std;

// reverse an array without using extra array

void reverse(int arr[], int i, int j)
{ // this fn is for reversing part of an array or whole array depends upon index passed

    while (i <= j)
    {

        // int temp = arr[i];
        // arr[i] = arr[j];
        // arr[j ] = temp;
        // i++;
        // j--;




        // without using temp variable bhi toh kr skte hai
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr, 1, 4); // reverse function ke andar hamne arr aur uske index no.1 & 4 ko pass kiya hai iss trh se index no. 1 se lekr 4 tak wale reverse ho jayenge
                        // agar pura array reverse krna hai  toh index 0 se 6  pass krdo.

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}