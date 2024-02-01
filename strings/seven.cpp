#include<iostream>
#include<string.h>
using namespace std;

bool isAnagram(string s, string t){
    int freqTable [256] = {0};
    for(int i=0; i<s.length(); i++){
        freqTable[s[i]]++;

    }

    for(int i=0; i<t.size(); i++){

        freqTable[t[i]]--;
    }

    for(int i=0; i<256; i++){
        if(freqTable[i] != 0){
            return false;
        }
    } return true; 
}








int main(){
    // valid anagram

    string s = "anagram";
    string t = "raganam";
    bool result = isAnagram(s,t );
    cout<<result<<endl;
}