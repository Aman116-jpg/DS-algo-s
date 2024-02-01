#include<iostream>
#include<string.h>
using namespace std;
void convertintouppercase(char arr[]){
    int n = strlen(arr);
    for(int i=0; i<n; i++){
        arr[i] = arr[i] - 'a' + 'A' ;
    }
}

void convertintolowercase(char brr[]){
    int n = strlen(brr);
    for(int i=0; i<n; i++){
        brr[i] = brr[i] + 'a' - 'A' ;
    }
}      


int main(){
     

     // uppercase me convert krreh
 
     char arr[100] = "babbar";
     convertintouppercase(arr);
     cout<<arr<<endl;


     // lowercase

     char brr[100] = "BABBAR";
     convertintolowercase(brr);
     cout<<brr<<endl;


}