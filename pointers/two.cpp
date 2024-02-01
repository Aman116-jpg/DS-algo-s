#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //     int *ptr;  // iss trh se decleration of pointer is a bad practice
    //     cout<< *ptr <<endl;

    // NULL POINTER
    // int *ptr = 0;
    // int *ptr = nullptr;
    // cout << *ptr << endl;
    // return 0;

    // int a = 6;
    // int *ptr = a  // error aayega cant do this kyuki adress stor krta hai na to & lagana padega




    // int a = 6;
    // int *ptr = &a;

    // // copy pointer
    // int *dusraptr = ptr; // pointer ko copy krdiya

    // cout << *ptr << endl;
    // cout << *dusraptr << endl; // same value print hogi




    int b = 10;
    int *p = &b;
    int *q = p;
    int *r = q;

    cout << b << endl;
    cout << &b << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    cout << q << endl;
    cout << &q << endl;
    cout << *q << endl;
    cout << r << endl;
    cout << &r << endl;
    cout << *r << endl;
    cout << (*p + *q + *r) << endl;
    cout << (*p) * 2 + (*r) * 3 << endl;
    cout << (*p / 2) - (*q) / 2 << endl;
     
}