#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[20], size, pos, i;
    cout << "enter the size of array: ";
    cin >> size;
    if (size > 20 || size < 0)
    {
        cout << "overflow or underflow" << endl;
    }
    else
    {
        cout << "enter the elements of array" << endl;
        for (i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << "enter the position you want to delete: " << endl;
        cin >> pos;
        if (pos <= 0 || pos > size)
        {
            cout << "invalid position " << endl;
        }
        else
        {
            for (i = pos - 1; i < size - 1; i++){
                arr[i] = arr[i+1];
            }size--;
            for(i = 0 ; i<size; i++){
                cout<<arr[i]<<" "<<endl; 
            }

        }
    }
    return 0;
}