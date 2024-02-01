#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int e, int target)
{
    if (s > e)
    {
        return -1;
    }

    // processing
    int mid = s + (e - s) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }

    if (target > arr[mid])
    { // right part me search kro
        // s = mid+1;
        return binarySearch(arr, mid + 1, e, target);
    }
    else
    {
        // e = mid-1;
        // left half me search kro
        return binarySearch(arr, s, mid - 1, target);
    }
}
int main()
{
    // binary search in recursion
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;
    int start = 0;
    int end = size - 1;
    int target = 80;
    int foundIndex = binarySearch(arr, start, end, target);
    if (foundIndex != -1)
    {
        cout << "target found at index :"
             << " " << foundIndex << endl;
    }
    else
    {
        cout << "target not found" << endl;
    }

    return 0;
}