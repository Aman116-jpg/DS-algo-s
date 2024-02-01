#include <bits/stdc++.h>
using namespace std;

int x = 2; // global variable , this is accesable from anywhere within program

void fun()
{
    int x = 60;
    cout << x << endl;
    ::x = 8;
    cout << ::x << endl;
}
int main()
{
    ::x = 4; // updated gloobal x , colon is used to do so

    int x = 20;          // iss x ki aukaat main fn tk hi hai
    cout << x << endl;   // x within main fn will get printed , always remember cout prints the neraest neighbour .
    cout << ::x << endl; // this is how we access global variable inside any fn or scope
    fun();

    {
        int x= 50;
        cout<< x<< endl;
        cout<< ::x <<endl;  
    }

    return 0;
}