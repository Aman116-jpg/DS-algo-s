
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     // moving zeros at the end

//     vector<int> arr = {3, 2, 6, 0, 7, 0, 5, 0, 5, 0, 0, 1, 2};
//     int n  = arr.size();
//     int j;
//    for(int i=0 ; i<n; i++) {
//     if(arr[i] == 0){
//         j = i;
//         break;

//     }

//    }

//    for(int i = j+1; i<n; i++){
//     if(arr[i] != 0){
//         swap(arr[i], arr[j]);
//         j++;
//     }

//    }

//    for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//    }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int arr[5] = {1,2,2,6,6};
// int brr[5] = {2,7,7,9,9};
// set<int>st;
// for(int i=0; i<5; i++){
//     st.insert(arr[i]);

// }
// for(int i=0; i<5; i++){
//     st.insert(brr[i]);
// }
// int comb[st.size()];
// int j = 0;
// for(auto it: st)
//     comb[j++] = it;

// for(int i=0; i<st.size(); i++){
//     cout<<comb[i]<<" ";
// }
//  return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 6;
//     int arr[n] = {1,2,3,4,6};
//     // missing number dhundho

//     int Xor1 = 0;
//     for(int i=1; i<=n; i++){
//         Xor1 = Xor1^i;
//     }
//    int Xor2 = 0;
//     for(int i=0; i<n-1; i++)
// {
//      Xor2 = Xor2^arr[i];
// }
// int missing = (Xor1)^(Xor2);
// cout<< missing;

//  return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[14] = {1,1,1,0,1,0,0,0,1,1,1,1,1,0};
//     int n = 14;
//     int maxi = 0;
//     int cnt = 0;
//     for(int i=0; i<n; i++){
//            if(arr[i] == 1){
//             cnt++;
//             maxi = max(cnt, maxi);
//            }
//            else{
//             cnt = 0;
//            }
//     }
//     cout<< maxi;

//  return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> arr = {2, 3, 4, 1, 1, 1, 2, 5, 1};
//     int z = 5;
//     int n = arr.size();
//     int sum;
//     int length = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//             }
//             if (sum == z)
//             {
//                 length = max(length, j - i + 1);
//             }
//         }
//     }
//     cout << length;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int longestSubarr(vector<int>&arr, int k){
//     int n = arr.size();
//     int sum; 
//     int length = 0;
//     for(int i=0 ;i<n; i++){
//         sum = 0;
//         for(int j=i; j<n; j++){
//             sum+= arr[j];
//             if(sum == k){
//                 length = max(length, j-i+1);
//             }
//         }
//     } return length;
// }
// int main()
// {
//     vector<int>arr = {2,2,2,1,1,1,5,6,2,1};
//     long long k  = 9;
//     int result = longestSubarr(arr, k);
//     cout<<"the length of longest sub-array is"<<" "<<result<<endl;
//  return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9] = {1,1,1,1,3,3,2,4,5};
    int n = 7;
    int hash[20] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    cout<< hash[1];
 return 0;
}