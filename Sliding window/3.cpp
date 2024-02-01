#include<bits/stdc++.h>
using namespace std;
int main()
{


    // subarrays of size k with max elements

    int arr[8] = {1,3,-1,-3,5,3,6,7};
    int n = 8;
    int k = 3;
    list<int>mylist;
    vector<int>ans;
    int i=0;
    int j=0;
    while(j<n){
        while(mylist.size() > 0 && mylist.back() < arr[j]){
            mylist.pop_back();
        }
        mylist.push_back(arr[j]);

        if( j-i+1 < k) j++;
        if(j-i+1 == k){
            ans.push_back(mylist.front());
            if(arr[i] == mylist.front()){
                mylist.pop_front();
            }
            i++;
            j++;
        }
    } 
    for(int a = 0; a<ans.size(); a++){
        cout<<ans[a]<<" ";
    }
 return 0;
}