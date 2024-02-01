#include<iostream>

#include<cmath>
using namespace std;


//decimal to binary conversion method 

/* int decimalToBinaryMethod(int n){
    // division method
    int binaryNo = 0; 
    int i = 0;
    while(n>0){
        int bit = n%2;
        binaryNo = bit*pow(10 , i++) + binaryNo;  //learn it as a formulae of how to reverse bits
        n = n/2;
    }
    return binaryNo;    
}                  */
// int decimalToBinaryMethod(int n){
//     // Bitwise method.
//     int binaryNo = 0;
//     int i = 0;
//     while(n>0){
//         int bit = (n & 1);
//         binaryNo = bit*pow(10 , i++) + binaryNo;  //learn it as a formulae of how to reverse bits
//         n = n>> 1;
//     }
//     return binaryNo;
// }
   // binary to decimal conversion

   /*#include <iostream>  
using namespace std;  
int main()  
{  
int a[10], n, i;    
cout<<"Enter the number to convert: ";    
cin>>n;    
for(i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2;  
}    
cout<<"Binary of the given number= ";    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];
}    
}*/

int binaryTodecimal(int n){
    int decimal = 0;
    int i = 0;
    while(n){
        int bit = n%10;
        decimal = decimal + bit * pow(2, i++);
        n = n/10;
    }
    return decimal;
}





int main(){
 /*int n;
    cin>>n;

    int binary = decimalToBinaryMethod(n);
    cout<<binary<<endl;
*/   

int n;
cin>>n;
int decimal = binaryTodecimal(n);
cout<<decimal<<endl;

}

