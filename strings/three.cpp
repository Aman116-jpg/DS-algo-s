#include<iostream>
#include<string.h>
using namespace std;



string removeOccurences(string s, string part){
    int pos = s.find(part);   //agar part wali string hai s me toh index return hogi if not toh npos--no position
    while(pos != string::npos ){
        s.erase(pos, part.length());  // hamesha 2 parameter chaiye hota hai
        pos = s.find(part);
    }
    return s; 
}





int main(){
      string s = "amanabcsinghabc";
      string part = "abc";
      string result = removeOccurences(s, part);
      cout<<result<< endl;
}