#include <bits/stdc++.h>
using namespace std;

bool printarray(int arr[], int size, int index, int target)
{
    // base case
    if (index >= size)
    {
        return false;
    }
    // processing
    if (arr[index] == target)
    {
        return true;
    }

    // recursive caLL
     printarray(arr, size, index+1, target);
}

int main()
{

    // search in an array

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 40;
    int index = 0;
    printarray(arr, size, index, target);

    if (printarray(arr, size, index, target))
    {
        cout << "Found target: " << target<<" "<<" in the array." << endl;
    }
    else
    {
       cout << target << " not found in the array." << endl;
    }

    return 0;
}