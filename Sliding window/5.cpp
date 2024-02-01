
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Longest Substring With K Unique Characters | Variable Size Sliding Window

    string str = "aabacbebebe";
    int n = str.size();
    int maxi = INT_MIN;
    int k = 3;
    int i = 0;
    int j = 0;
    map<char, int> mymap;

    while (j < n)
    {
        mymap[str[j]]++;

        if (mymap.size() < k)
        {
            j++;
        }
        else if (mymap.size() == k)
        {
            maxi = max(maxi, j - i + 1);
            j++;
        }
        else if (mymap.size() > k)
        {
            while (mymap.size() > k)
            {
                mymap[str[i]]--;
                if (mymap[str[i]] == 0)
                {
                    mymap.erase(str[i]);
                }
                i++;
            }
            j++;
        }
    }
    cout << maxi;

    return 0;
}
