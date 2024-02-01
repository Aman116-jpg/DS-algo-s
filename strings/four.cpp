  #include<iostream>
#include<string.h>
using namespace std;

bool checkpalindrome(string s, int i, int j){
    while(i<=j){
        if(s[i] != s[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }return true;
}






bool validpalindrome(string s){
    int i = 0; 
    int j = s.length()-1;
    while(i<=j){
        if(s[i] != s[j]){
            // ek baar i ko remove ek baar j ko 
            return checkpalindrome(s, i+1, j) || checkpalindrome(s, i, j-1);
        }
        else{
            i++;
            j--;
        }
    } return true;  
}






int main(){
     // check valid palindrome where ypu can remove atmost 1 char from string

     string s = "leverl";
     bool result = validpalindrome(s);
     cout<<result<<endl;
}