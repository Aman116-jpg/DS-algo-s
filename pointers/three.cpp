#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pointers with array

    int arr[6] = {2, 4, 5, 7, 5, 8};
    cout << arr << endl;                   // base addrss of array will get print ie. address of first value of array
    cout<< *(&arr); 
    //                                        cout<<&arr[0]<<endl;  // base addres hi print krega
    //   cout<<(*(&arr+1)- *(&arr));  // this will return no. of element in the array
    // int arr[5] = {10, 20, 30, 40, 50};
    // int *aptr = &arr;   // this will throw error in case of array

    //   int *aptr = arr;  // now this is cool
    //  cout<<*aptr<<endl;

    // cout << *arr << endl; // pointing to value of address stored in arr----->i.e base address wale ki value .
    // cout << *arr + 1 << endl;  //11
    // cout << *(arr) + 1 << endl; //11
    // cout << *(arr + 1) << endl;  //20

    // cout << *(arr + 2) << endl; //30
    // cout << *(arr + 3) << endl;  //40
    cout << sizeof(arr) << endl; // ek  int 4 byte ka hota hai yaha par 5 hai toh 4*5 = 20 pribt hoga

    // some imp key point s
    /*
    *(arr+0) is same as arr[0]
    *(arr+1) is same as arr[1]
    *(arr+2) is same as arr[2]
    *(arr+3) is ame as arr[3]

    *(arr+i) is same as arr[i]
    we can also say that *(arr+i) == *(i + arr) == i[arr] now this is very imp just remember that arr[i] is same as i[arr]
    */

    //    int a = 5;

    //    int *p = &a;
    //    p = p+1;
    //    cout<<p<<endl;

    //  int brr[5] = {1,2,3,4,5};
    //  brr = brr+1;    // this will throw error pta karo why

    return 0;
}