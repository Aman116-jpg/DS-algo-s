#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Longest Substring With all unique Repeating Characters | Variable Size Sliding Window


    
    string str = "pwwkew";
    int maxi = INT_MIN;
    int n = str.size();
    int  i =0; 
    int j =0;
    map<char, int>mp;
    while( j< n){
        mp[str[j]]++;
         if(mp.size()  > j-i+1){ // we don.t need to write this case, as this will never happen
            j++;

         }
         else if(mp.size() == j-i+1){
            maxi = max(maxi, j-i+1);
            j++;
         }
         else if(mp.size() < j-i+1){
            while(mp.size() < j-i+1){7
                mp[str[i]]--;
                if(mp[str[i]] == 0){
                    mp.erase(str[i]);
                }i++;


            }j++;
         }
         

        
    } cout<<maxi;
 return 0;
}