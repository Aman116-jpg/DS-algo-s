#include <iostream>
using namespace std;
int main()
{

  // int arr[50][50]; // 2Darray with 50rows and 50 coloumn
  //  int arr[3][3];  // decleration

  // decleration + initialisation
  int brr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  // print
  //  cout<<brr[2][2]<<endl;  // index-2nd row 2nd col wala elment print hoga dhyan rhe index to 0 se hi start hoga na rows aur col dono ka
  //  cout<<brr[0][2];  // 3

  // row wise print
  cout << "row wise" << endl;
  for (int i = 0; i < 3; i++)
  {
    // for every row we need to print value in each col

    for (int j = 0; j < 3; j++)
    {

      cout << brr[i][j] << " ";
    }
    cout << endl; 
  }

  // col wise print or we can say transpose of the given matrix
  // if no. of rows and coloumns are not equal then in case of transpose no. of rows and col will interchange
  cout << "col wise" << endl;
  for (int i = 0; i < 3; i++)
  {

    for (int j = 0; j < 3; j++)
    {

      cout << brr[j][i] << " ";
    }
    cout << endl;
  }
}