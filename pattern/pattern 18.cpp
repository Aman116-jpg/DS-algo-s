
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    // spaces
    for(int j=0; j<n-i-1; j++){
      cout<<" ";
    }

    // char 
    char ch  = 'A';
    int breakpoint = (2*i+1)/ 2;

    for(int k = 1; k<=2*i+1; k++){
        cout<<ch;
        if(k<= breakpoint){
          ch++;
        }else{
          ch--;
        }
    }
    // sapces 
    for(int j=0; j<n-i-1; j++){
      cout<<" ";
    } cout<<endl;
  }  
 return 0;
}