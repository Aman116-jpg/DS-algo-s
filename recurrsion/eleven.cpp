#include<bits/stdc++.h>
using namespace std;
void func(int n, vector<int>&ans, int digit){
    if(n == 0){
          return;
    }
    digit = n % 10;
    // cout<< digit<<" "; in reverse order
    n = n/10;
    func(n, ans, digit);
   // cout<<digit<<" "; // for simply printing the digits in correct order
     ans.push_back(digit);
}
int main()
{
    // store the digits of n in a vector

    int n;
    cout<<"enter the value of n: ";
    cin>>n ;
    vector<int>ans;
    int digit;
    

    func(n, ans, digit);
    for(auto num: ans){
        cout<< num<<" ";
    }
 return 0;
}