#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool twoSum(vector<int>arr, int n, int target)
{
   
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == target)
        {
            return true;
        }
        else if ((arr[low] + arr[high]) > target)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{
    // total pairs batao jinka sum given no. x ke equal hai
   /*int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int totalpairs = 0;
    int x = 12;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                totalpairs++;
                cout << (arr[i]) << " " << (arr[j]) << " " << endl;
            }
        }
    }
    cout << totalpairs << endl;*/ 




    // now optimal soln

    vector<int>arr {1, 28, 37, 48, 59, 4, 77, 8};
    int n = arr.size();
    int target = 12;
     sort(arr.begin(), arr.end());

    bool ans = twoSum(arr, n, target);
    cout << ans;
}
