#include<iostream>
#include<vector>
#include<limits.h>
#include<cmath> 
using namespace std;


int missingK(vector < int > vec, int n, int k) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int missing = vec[mid] - (mid + 1);
        if (missing < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return k + high + 1;
}





int main(){
    vector<int> vec{4,7,9,10};
    int n = 4;
    int k = 4;
    int ans = missingK(vec, n, k);
    cout<<"the kth missing no. is "<<ans<<endl;
    return 0;
}