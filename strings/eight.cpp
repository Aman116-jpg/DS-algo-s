#include<iostream>
#include<string.h>
using namespace std;


bool isEnglishLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}



string reverseOnlyLetters(string s) {
        // int low = 0;
        // int high = s.size()-1;
        // while(low<high){
        //     if (!isalpha(s[low])) {
        //     low++;
        // } else if (!isalpha(s[high])) {
        //     high--;
        // } else {
        //     swap(s[low], s[high]);
        //     low++;
        //     high--;
        // }
        // }return s;


// without using isalpha func
          int low = 0;
    int high = s.size() - 1;
    
    while (low < high) {
        if (!isEnglishLetter(s[low])) {
            low++;
        } else if (!isEnglishLetter(s[high])) {
            high--;
        } else {
            swap(s[low], s[high]);
            low++;
            high--;
        }
    }
    
    return s;


    }

int main(){



// Given a string s, reverse the string according to the following rules:

// All the characters that are not English letters remain in the same position.
// All the English letters (lowercase or uppercase) should be reversed.




    string s = "Aman45_sin*#";
    string result =  reverseOnlyLetters(s);
    cout<<result<<endl;
}