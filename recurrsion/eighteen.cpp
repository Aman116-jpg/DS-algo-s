#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &arr, int index, int sum, vector<int> &output, int k) {
    if (sum == k) {
        for (int num : output) cout << num << ' ';
        cout << endl;
        return true;
    }

    if (index == arr.size()) {
        return false;
    }

    // Include the current element in the subset
    output.push_back(arr[index]);
    sum += arr[index];
    if (solve(arr, index + 1, sum, output, k)) {
        return true;
    }

    // Exclude the current element from the subset
    output.pop_back();
    sum -= arr[index];
    return solve(arr, index + 1, sum, output, k);
}

int main() {

    // print any subseq.. whose sum is equal to k--->watch striver  lect
    vector<int> arr = {1, 2, 1};
    int index = 0;
    int sum = 0;
    int k = 2;
    vector<int> output;
    solve(arr, index, sum, output, k);
    return 0;
}
