#include<iostream>
using namespace std;
int main(){
    // left shift operator- multiply hota hai 2 se but sirf +ve no. k liye
    // bit level par 0 add krte hai last me
    int a = 12;
    a = a << 2; // a ko 2 baar left shift krdiya so  answer will be 12*(2*2)=48
    cout<< a <<endl;

    // right shift operator- divide hota hai 2 se but sirf +ve no. k liye
     // bit level par 0 nikal lete krte hai last me se
   int b = 12;
   // int b = -12;
    b = b >> 2; // a ko 2 baar right shift krdiya so  answer will be 12/4= 3
    cout<< b <<endl;
}
