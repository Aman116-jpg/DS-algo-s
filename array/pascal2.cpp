#include<bits/stdc++.h>
using namespace std;
int main()
{
//     // print all the elements of row=3 of a pascal traingle , this is 1 based row indexing

    int row = 3;
    int ans = 1;
    cout<<ans<<" ";
     for(int col=1; col<row; col++){
        ans = ans*(row-col);
        ans = ans/col;
        cout<<ans<<" ";
     }

 return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     // print all the elements of row=3 of a Pascal triangle , 0 based row indexing

//     int row = 3;
//     int ans = 1;
//     cout << ans << " ";

//     for (int col = 0; col < row; col++) {
//         ans = ans * (row - col) / (col + 1);
//         cout << ans << " ";
//     }

//     return 0;
// }
