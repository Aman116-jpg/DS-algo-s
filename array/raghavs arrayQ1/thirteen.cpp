#include <iostream>
using namespace std;
int main()
{

    //  find unique elements

    int arr[11] = {1, 2, 3, 4, 5, 5, 6, 6, 1, 2, 3};
    for (int i = 0; i < 11; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < 11; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            cout << arr[i];
            break;
        }
    }
}
