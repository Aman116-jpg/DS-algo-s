#include<iostream>
#include<string.h>
using namespace std;

bool checkpalindrome(char word[]){
    int i=0; 
    int n = strlen(word);
    int j = n-1;
    while(i<=j){
        if(word[i] != word[j]){
            return false;
        }
        else{
            i++;
            j--;
             
        }
    }
     return true;
  
}


int main(){


    //palindrome

      char word[100] = "babbab";
      cout<<"palindrome check: "<<checkpalindrome(word);
      return 0;

}