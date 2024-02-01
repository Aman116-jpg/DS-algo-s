#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // int a = 5;
    // int b = 5;

    // cout << a << endl;
    // cout << b << endl;

    // cout << &a << endl; // address print hogi a ki
    // cout << &b << endl;

    // int a = 5;
    // // pointer create-> poitner in c++ is a variable that stores address of another variable
    // int *ptr = &a;

    // cout << "adrress of a is: " << &a << endl;

    // // acess the value ptr is pointing to
    // cout << *ptr << endl; //  value of var whose address is stored in  ptr var, remember ptr ki apni khud kki address bhi hogi jo alag hoggi
    // cout << ptr << endl;  // address of varibale stored in ptr, that is address of a 
    // cout << &ptr << endl; // ptr variable ki address print hogi


int a = 5;
int *ptr = &a;
cout<< sizeof(ptr) <<endl;



char ch = 'b';
char *c = &ch;
cout<< sizeof(c) <<endl;



double d = 5.44;
double *dtr = &d;
cout<< sizeof(dtr) <<endl;

// upar ke teeno cases me same value print hogi kyuki 
// jo hamara sytum hai wo ek adress ko (of any type)store krne ke liye 4 byte ka space leta hai
// ye system architecture par depend krta hai

    return 0;
}