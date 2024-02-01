#include<bits/stdc++.h>
using namespace std;
int main()
{


char ch[50] = "love";

//cout<<&ch[0]<<endl;  // pura char yani love print ho jayega but agar hm 0 ke jgh alg index de to uss index ki value print hogi-----> chezze alg hi chal rhi hai in case of char array 
char *cptr = ch;  // yaha par jaruri nhi ki &ch likhu kyuki ye ek array hai ch and &ch dono hi base address ko denote krte hai. 
//char *cptr = &ch;  /// ye run nhi hoga
//cout<<&cptr<<endl; // address of ch

char kh[50] = "love";
char *kptr = kh;
cout<<kh<<endl;
cout<<&kh<<endl;
cout<<&kptr<<endl;
cout<<*kptr<<endl;
cout<<kptr<<endl;
 return 0;

   
}