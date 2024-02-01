class Solution {
public:

 bool isvowel(char ch){
     ch = tolower(ch);  // pre def fn to convert char into lowercase agar ch uppercase bhi to hmne use lowercase me convert krdiya
     return ch == 'a' || ch =='e' || ch == 'i' || ch =='o' || ch =='u';  // in me se koi  sa bhi ch hua toh true return hoga

 }
    string reverseVowels(string s) {
        int l =0; 
        int h = s.size()-1;
        while(l<h){
            if(isvowel(s[l]) && isvowel(s[h])){
                swap(s[l], s[h]);
                l++;
                h--;
            }else if(isvowel(s[l]) ==0){
                l++;

            }else{
                h--;
            }
        } return s; 
    }
};