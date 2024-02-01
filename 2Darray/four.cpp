#include <iostream>
#include <limits.h>
using namespace std;

int getmax(int arr[][3], int rows, int col)
{
    int maxi = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

int getmin(int arr[][3], int rows, int col)
{
    int mini = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

int main()
{

    // max and min value in 2d array

    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {11, 8, 9}, {1, 2, 3}};
    int rows = 4;
    int col = 3;

    // printing row wise
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "the max element is"
         << " " << getmax(arr, rows, col) << endl;

    cout << "the min element is"
         << " " << getmin(arr, rows, col);
}