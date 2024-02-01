#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pointer to pointer-----------> screenshot dekho

    

//     int a = 5;
//     int *p = &a;
//     int **q = &p;
//   //  int **q = &a;  galat hai error aayega

//     cout << a << endl;
//     cout << &a << endl;
//     cout << p << endl;
//     cout << &p << endl;
//     cout << *p << endl;
//     cout << q << endl;
//     cout << &q << endl;
//     cout << *q << endl;
//     cout << **q << endl;

int b = 10;
int *p =  &b;
int **q = &p;
int **r = &p;
int ***s = &q;
// diagram bana lo jldi ho jayega-- see SS
cout<< *s <<endl;
cout<< **r <<endl;
cout<< ***s <<endl;
cout<< **q <<endl;
cout<< **s <<endl;
cout<< *q <<endl;

cout<< *p <<endl;
cout<< p <<endl;
cout<< &s <<endl;
cout<< &r <<endl;
cout<< &q <<endl;
cout<< **s + 1 <<endl;



    return 0;
}