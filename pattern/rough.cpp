// #include<bits/stdc++.h>
// using namespace std;
// int main()
// { 
//     int n = 5;
//     int arr[n] = {2,5,8,9,11};
//    int count = 0 ;
//     for(int i = 0; i<n; i++){
//         if(arr[i+1]>= arr[i]){
//             count++;
//         }
//     }
//     if(count  == n){
// cout<<"sorted array ";
//     }else{
//         cout<<"lawda ";
//     }

//  return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0;
   
    vector<int>arr = {1,1,2,2,3,3};
    int n = arr.size();
   
        for(int j=1; j<n; j++){
            if(arr[i] != arr[j]){
                
                arr[i+1] = arr[i];
                 i++;
               
            }
        }
    
     return i+1;
}