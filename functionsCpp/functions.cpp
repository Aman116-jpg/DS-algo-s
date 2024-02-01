#include<iostream>
using namespace std;


void printname(){
    int n;
    cout<<"enter the value of n: ";
      cin>>n;
      for(int i=0; i<n; i++){
        cout<<"babbar"<<endl;
      }
}

void printNumber(int a){  // main function ke andar wala a alaf hai aur ye wala a alag hai memory me in dono ki address alag hogi and aue jo hmne main fn se a pass kiya hai is fn ko isi ko kehte hai pass by value function
    cout<<a<<endl;       

}
int main(){
   // function call
 //  printname(); 

 int a= 5;
 cout<<"Adress of a: "<< &a<<endl;
 
  //printNumber(a);

   return 0; 
}  