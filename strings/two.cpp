#include<iostream>
#include<string.h>
using namespace std;

string removeDuplicates(string s){
    string ans ="";
    int i = 0;

    while(i<s.length()){


        if(ans.length() > 0){
            if(ans[ans.length() -1]  == s[i]){
                ans.pop_back();
            }else{
                ans.push_back(s[i]);
            }
        }
        else{
        
        ans.push_back(s[i]);
    }
    i++;

    }
    return ans;
}




int main(){



// You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and
// equal letters and removing them.
// A ▷
// We repeatedly make duplicatemovals on s until we no longer can.
// Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.


    string s = "abbasjjssabbrry";
    string result = removeDuplicates(s);
    cout<<result<< endl;
}