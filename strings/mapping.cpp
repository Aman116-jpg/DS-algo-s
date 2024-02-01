#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

string decodemessage(string key, string message){
    char start = 'a';
    char mapping[300] = {0};

    for(auto ch:key){
        if(ch != ' ' && mapping[ch] == 0){
            mapping[ch] = start;
            start++;
        } 
    }

    // use mapping
    string ans;
    for(auto ch:message){
        if(ch == ' '){
            ans.push_back(' ');
        }else{
            char decodechar = mapping[ch];
            ans.push_back(decodechar);
        }
    }return ans;
}
 
int main()
{
    string key  = "lmao noob";  // 
    string message = "onlm";   //message  must contains all  char that are present in key..
    string result=  decodemessage(key, message);
    cout<<result<<endl;
    return 0;
}