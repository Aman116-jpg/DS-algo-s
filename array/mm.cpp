// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // print all the elements of row=3 of a Pascal triangle , 0 based row indexing

//     int row = 3;
//     int ans = 1;
//     cout << ans << " ";

//     for (int col = 0; col < row; col++) {
//         ans = ans * (row - col) / (col + 1);
//         cout << ans << " ";
//     }

//  return 0;
// }
// vector<int> majorityElement(vector<int> v) {
//     int n = v.size(); //size of the array
//     vector<int> ls; // list of answers

//     for (int i = 0; i < n; i++) {
//         //selected element is v[i]:
//         // Checking if v[i] is not already
//         // a part of the answer:
//         if (ls.size() == 0 || ls[0] != v[i]) {
//             int cnt = 0;
//             for (int j = 0; j < n; j++) {
//                 // counting the frequency of v[i]
//                 if (v[j] == v[i]) {
//                     cnt++;
//                 }
//             }

//             // check if frquency is greater than n/3:
//             if (cnt > (n / 3))
//                 ls.push_back(v[i]);
//         }

//         if (ls.size() == 2) break;
//     }

//     return ls;
// }

#include <bits/stdc++.h>
using namespace std;

// int missingNumber(vector<int>&a, int n) {

//    int j = 1;
//    for(int i= 0; i<n-1; i++){
//     if(a[i] != j){

//         return j;
//         break;
//     }
//     j++;

//    }return j;
// }

// int main()
// {
//     int N = 10;
//     vector<int> a = {1, 2,3, 4, 5,6,7,8,10};
//     int ans = missingNumber(a, N);
//     cout << "The missing number is: " << ans << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

//   vector<int> RearrangebySign(vector<int>A){
    
//   int n = A.size();
  
//   // Define array for storing the ans separately.
//   vector<int> ans(n,0);
  
//   // positive elements start from 0 and negative from 1.
//   int posIndex = 0, negIndex = 1;
//   for(int i = 0;i<n;i++){
      
//       // Fill negative elements in odd indices and inc by 2.
//       if(A[i]<0){
//           ans[negIndex] = A[i];
//           negIndex+=2;
//       }
      
//       // Fill positive elements in even indices and inc by 2.
//       else{
//           ans[posIndex] = A[i];
//           posIndex+=2;
//       }
//   }
  
//   return ans;
    
// }

// int main() {
    
//   // Array Initialisation.
  
//   vector<int> A = {1,2,-4,-5};

//   vector<int> ans = RearrangebySign(A);
  
//   for (int i = 0; i < ans.size(); i++) {
//     cout << ans[i] << " ";
//   }

//   return 0;
// }
