
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[6] = {2,3,1,6,8,3};
//     int n = 6;
//     map<int,int>mp;
//     int target = 14;
//     for(int i = 0; i<n; i++){
//         int a = arr[i];
//         int rem = target-a;
//         if(mp.find(rem) != mp.end()){  // this line means the rem is present inside map to the left side of arr[i]
//       //  cout<<"hell yeah";
//       cout<<mp[rem],i;  // smaller one first and its index size i.e 6 ki index return hogi ya print hogi

//         }else{
//             mp[a] = i;
//         }


//     } 
//  return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()

// {
//     vector<int>arr = {2,3,1,6,8,3};
//     sort(arr.begin(), arr.end());
//    int n = 6;
// //     map<int,int>mp;
//   int target = 14;
//   int i =0; 
//   int j =n-1;
//   for(int i=0; i<n; i++){
//     if(arr[i] + arr[j] > target){
//         j--;
//     }else if(arr[i]+arr[j] < target){
//         i++;
//     }
//     else if(arr[i]+arr[j] == target){
//         cout<<"gotcha brother";
//     }
//   }
//  return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

//  void reverse(vector<int>&arr, int i, int j){
//     while(i<=j){
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
    
// }
// int main()
// {
//     vector<int>arr = {1,2,3,4,5,6,7};  
//     int n = arr.size();
//     int k = 3;
//     reverse(arr,0, k-1);
//     reverse(arr,k,n-1);
//     reverse(arr,0,n-1);

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

  
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 8;
//     int arr[n] = {1,0,2,3,0,4,0,1};
    
//     vector<int>temp2;
//     for(int i =0; i<n; i++){
//         if(arr[i] != 0){
//             temp2.push_back(arr[i]);

//         }
        

//     }
//     for(int i=0; i<temp2.size(); i++){
//         arr[i] = temp2[i];
//     }
    
//     for(int i = temp2.size(); i<n; i++){
//         arr[i]  = 0;
      
//     }

//     for(int i =0; i<n; i++){
//         cout<<arr[i]<<" ";

//     }
//  return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n = 5;
    int m = 5;
int arr1[n] = {1,2,3,4,5} ; 
int arr2[m] = {2,3,4,4,5};
set<int>st;
for(int i =0; i<n; i++){
    st.insert(arr1[i]);

}
for(int i =0; i<n; i++){
    st.insert(arr2[i]);
    
}
for(auto it:st){
    cout<<it<<" ";
}

 return 0;
}