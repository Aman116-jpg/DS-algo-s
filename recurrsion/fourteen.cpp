#include<bits/stdc++.h>
using namespace std;

 void findSubsequences(string str, string output, int index){
        // base cae
        if(index >= str.length()){
            cout<<output<<endl;
            return;
        }
        char ch = str[index];

        //lets  exclude first
        findSubsequences(str, output, index+1);
        // include
        // output string me ch char ko include krlo

        output.push_back(ch);
        findSubsequences(str, output, index+1);

        /*
        agar pehle include kre 
        
        output.push_back(ch);
        findSubsequences(str, output, index+1);
        
        // exlude
        output.pop_back();
        
        findSubsequences(str, output, index+1);

         */

 }
        


int main()
{
   string str = "abc";
   string output = "";
   int index = 0;
   findSubsequences(str, output, index);
    

 return 0;
}