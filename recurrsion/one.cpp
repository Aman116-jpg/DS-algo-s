#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 1 )
    {
        return 1;
    }
    int ans = n * factorial(n - 1);
    return ans;
}

int sum(int a)
{
    // base case
    if (a == 0)
    {
        return 0;
    }
    int ans1 = a + sum(a - 1);
    return ans1;
}

void print(int b)
{
    // base case
    if (b == 1)
    {
        cout << 1 << endl;
        return;
    }

    // print for n to 1
    // cout<< b<<" ";
    // print(b-1);   // tail recursion

    // printing from 1 to n
    print(b - 1);
    cout << b << " "; // head recurrsion
   
}

int power(int c)
{ // find power of 2 raise to power c
    if (c == 0)
    {
        return 1;
    }

    int result = 2 * (power(c - 1));
    return result; 
}

int fibonacci(int d){
    if( d == 0 ){ 
       
        return 0;
    }
     if( d == 1 ){
       
        return 1;
    }

    int answer = fibonacci(d-1) + fibonacci(d-2);
  return answer;
    
}
int main()
{
    // print factorial of a number

    cout << factorial(5) << endl;

    // sum of n first nnumbers
    cout << sum(8) << endl;

    // print from n to 1 and n to 1
    // cout<<print(4)<<endl;  // void retrun type wale function me aise func pass nhi kr skte
    print(10);

    // find power of 2 raise to power c
    cout<<endl;
    cout << power(5) << endl;



    // print nth fibonacci no.
    cout<< fibonacci(5)<<endl;

    return 0;
}