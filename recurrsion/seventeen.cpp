#include<bits/stdc++.h>
using namespace std;
void  solve(vector<int> &arr, int index, int sum, vector<int> &output, int k ){
	  if (index == arr.size()) {
        if (sum == k) {
            for (int num : output) {
                cout << num << ' ';
                
            }
            cout << endl;
            
        }
       return; 
        
    }
	
	//picking 
	output.push_back(arr[index]);
    sum += arr[index];
	solve(arr, index+1, sum , output, k);
	//poping out while backtracking
	output.pop_back();
    sum -= arr[index];
	solve(arr, index+1, sum, output, k);
   
}
int main() {

    // print the sum of subsequences whose sum is equal to k

  vector<int>arr = {1,2,1};
	int index = 0;
	int sum = 0;
    int k = 2;
    vector<int>output;
	solve(arr, index, sum , output, k);
}

