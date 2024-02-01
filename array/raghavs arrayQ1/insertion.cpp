#include <iostream>
using namespace std;
int main()
{
    // insertion at any position

    int arr[50], size, data, position, i;
    cout << " enter the size of array: ";
    cin >> size;
    if (size > 50)
    {
        cout << " overflow condition" << endl;
    }
    else
    {
        cout << " enter the elements of array: " << endl;
        for (i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << "enter the data you want to insert: " << endl;
        cin >> data;
        cout << "enter the position : " << endl;
        cin >> position;
        if (position <= 0 || position > size + 1)
        {
            cout << " invalid position" << endl;
        }
        else
        {
            for (i = size - 1; i >= position - 1; i--)
            {
                arr[i + 1] = arr[i];
            }

            arr[position - 1] = data;
            size++;

            for (i = 0; i < size; i++)
            {
                cout << arr[i] << endl;
            }
        }
    }
}