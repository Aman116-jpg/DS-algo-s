
// bool comparestring( string a, string b ){    
//    if(a.length() != b.length())
//    {
//      return false;
//    }
//     else{
//       int j=0; 
//     for(int i=0; i<a.length(); i++){
//          if(a[i] != b[i]){
//              return false;
//          }
      
//     }


//     }
//      return true;
    
// }
// int n = size()
// queue<int>q;
// int i = 0;
// int j = 0;
// while(j<n){
//     if(arr[j] <0){
//         q.push_back(arr[j])
//     }
//     if(j-i+1 < k){
//         j++;
//     }else if(j-i+1 == k){
//         if(q.empty()){
//             q.push_abck(0)
//         }else{
//            ans.push_back(q.front())
//             if(arr[i] == q.front()){
//                 q.pop(q.front)
//             }

//         }
//         i++
//         j++
//     }

// }
// 	int findAnagrams(string txt, string pat) {
// 	    map<char,int>mp;
// 	    for(int i=0; i<pat.size(); i++){
// 	        mp[pat[i]]++;
// 	    }
// 	    int cnt = mp.size();
// 	    int ans = 0;
// 	    int size = pat.size();
// 	    int i=0; 
// 	    int j=0;
// 	    int n = txt.size();
// 	    while(j<n){
// 	        if(mp.find(pat[j]) != mp.end()){
// 	            mp[pat[j]]--;
// 	            if(mp[pat[j]] == 0){
// 	                cnt--;
// 	            }
// 	        }
// 	        if(j-i+1 < size){
// 	            j++;
// 	        }
// 	       else if(size == j-i+1){
// 	            if(cnt == 0){
// 	                ans++;
// 	            } 
// 	                if(mp.find(pat[i]) != mp.end()){
// 	                    mp[pat[i]]++;
// 	                    if(mp[pat[i]] == 1){
// 	                        cnt++;
// 	                    }
	                   
// 	                }
// 	            j++;
// 	            i++;
// 	        }
// 	    }
// 	    return ans;
// 	}

// #include<bits/stdc++.h>
// #include<string.h>
// using namespace std;
// int main()
// {
//     string text = "forxxorfxdofr";
//     string word = "for";
 
//     cout << findAnagrams(text, word);
//  return 0;
// }

// #include <iostream>
// #include <map>
// #include <string>
// using namespace std;

// int findAnagrams(string txt, string pat) {
//     map<char, int> mp;
//     for (int i = 0; i < pat.size(); i++) {
//         mp[pat[i]]++;
//     }
//     int cnt = mp.size();
//     int ans = 0;
//     int size = pat.size();
//     int i = 0;
//     int j = 0;
//     int n = txt.size();
//     while (j < n) {
//         if (mp.find(txt[j]) != mp.end()) {
//             mp[txt[j]]--;
//             if (mp[txt[j]] == 0) {
//                 cnt--;
//             }
//         }
//         if (j - i + 1 < size) {
//             j++;
//         } else if (size == j - i + 1) {
//             if (cnt == 0) {
//                 ans++;
//             }
//             if (mp.find(txt[i]) != mp.end()) {
//                 mp[txt[i]]++;
//                 if (mp[txt[i]] == 1) {
//                     cnt++;
//                 }
//             }
//             j++;
//             i++;
//         }
//     }
//     return ans;
// }

// int main() {
//     string text = "forxxorfxdofr";
//     string word = "for";

//     cout << findAnagrams(text, word);
//     return 0;
// }


