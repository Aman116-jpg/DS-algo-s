#include<bits/stdc++.h>
using namespace std;
int main()
{
  // first negative no. of each subarray of size k
  
     int arr[8] = {5,-6,9,3,-5,20,-4,6};
    int n = 8;
    int k = 3;
   
    int i=0;
    int j=0;
    list<int>lulu;
    vector<int>heyMan;
    while(j<n){
        if(arr[j]<0){
            lulu.push_back(arr[j]);
        }
        if( j-i+1 < k){
            j++;
        }
        else if(j-i+1 == k){
          if ( lulu.size() == 0){
            heyMan.push_back(0);
          }
          else{
            heyMan.push_back(lulu.front());
            if(arr[i] == lulu.front()){
                lulu.pop_front();
            }

          }

          i++;
        j++;
        } 
        

    }
    for(int a= 0; a<heyMan.size(); a++){
        cout<<heyMan[a]<<" ";
    }
 return 0;
}