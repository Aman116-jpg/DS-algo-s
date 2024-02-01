#include<iostream>
using namespace std;
  
  // write a function to add 2 numbers

// agar jesse naam ke function ne walt naam ke function ko call lagayi hai toh jesse hamesa walt ke niche hona chaiye same applies for all fucntion


//int add(int c, int d); // function declare krdioya ab agar main func k niche isko likhe to code chalega

int add(int c, int d)  
{
      int result = c + d; 
    return result;
    // return c + d; //direct ye bhi kr skte the
}

int main(){
     int a;
     cin>>a;
     int b;
     cin>>b;

     int sum;
     sum = add(a, b);
     cout<<sum<<endl;
  
     return 0;
}


// agar niche likh ke chalana hai to upar declare krna padegaa
/*int add(int c, int d)  
{
      int result = c + d; 
    return result;
    // return c + d; //direct ye bhi kr skte the
}*/
