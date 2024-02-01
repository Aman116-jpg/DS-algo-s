#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){


    // last occurence aur first occurence nikalne ke liye bhi pre defined function available hai
   

   // for first occurence
   vector<int> arr{1,3,3,3,3,3,3,4,4,4,4,67,7};
   int target = 4;
   auto ans = lower_bound(arr.begin(), arr.end(), target);
   cout<<"the first occurence of target is at index no. "<<ans-arr.begin()<<endl;

  // for last occurence

  vector<int> brr{1,3,3,3,3,3,3,4,4,4,4,67,7};
   int targetA = 4;
   auto ansA = upper_bound(brr.begin(), brr.end(), targetA);
   cout<<"the last occurence of target is at index no. "<<ansA-brr.begin()<<endl;

}