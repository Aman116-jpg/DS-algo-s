#include<iostream>
using namespace std;
int raja= 450; // ye raja global var ban chuka hai ab isko pure code me kahi bhi use kr skte hai
int main(){
    // decleration
    int a;
    // initialisation
    int b=5;  // ye var pure main fn k andar tk simit hai
    // updation
    b=13;
    if(true)
    {
        int b =20; // iss wale b ki aukaad is if block ke andar tk hi h ye local var hai
        cout<< b<<endl;
    }



    cout<<b<<endl;
}