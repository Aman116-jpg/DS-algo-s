class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
   sort(strs.begin(), strs.end());  // alphabatically sort krdiya array of strings ko
   string str1 = strs[0];


// sirf 1st aur last index wale strings ko hi check krna hai kyuki sorted hai na toh bitch wale common hi honge ..

   string str2  = strs[strs.size()-1];  // dhyan rhe array of string me size use krte hai na ki length
   int index =0;
   while(index < str1.size()){
       if(str1[index] == str2[index]){
           index++;
       }else{
           break;
       }
      
       
   } if(index == 0) {
           return "";
       }else{
           return str1.substr(0, index);
    }
    }

};


/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.*/