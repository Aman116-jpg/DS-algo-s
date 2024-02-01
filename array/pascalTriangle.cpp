#include<bits/stdc++.h>
using namespace std;


 // we use the formula of nCr to find element of pascal traingle
    // whenevr rows is given stari from row-1 and col is given start from col-1

    // find the element at the row=5 and Col =4 in a paascal traingle

    
int calPascal(int n, int r){
    int res = 1;
    for(int i = 0; i<r; i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}
int main()
{
   
    int row = 6;
    int col =  3;
    int ans = calPascal(row-1, col-1);
    cout<<ans;
 return 0;
}