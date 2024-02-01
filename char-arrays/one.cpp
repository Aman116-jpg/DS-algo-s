#include<iostream>
#include<string.h>
using namespace std;



// char array ke string ki length 
// int getLength(char name[]){
//     int length = 0;
//     int i=0;

//     while(name[i]!= '\0'){
//         length++;
//         i++;
//     }
//     return length;
// }


int main(){

    // char name[90];
    // cout<<"enter your name "<<endl;
    // cin>>name;  // bidefault last string par null char '\0' store ho jata hai
    // cout<<"aapka naam: "<<name<<" "<<"hai"<<endl;


    // char ch[100];
    //  ch[0] = 'a';  // taking input at index 0 that is first character
    //  ch[1]  = 'b';
    //  ch[2]  = 'c';

    // cin>>ch[2]; 
    // cout<<ch[0]<<ch[1]<<ch[2]<<endl;



    //  char name[100];
    //  cin>>name;  //bidefault last string par null char '\0' store ho jata hai 
    //  for(int i=0; i<7; i++){
    //     cout<<"index: "<<" value: "<<name[i]<<endl;   // tab(spaces) ko read nhi krega 
    //  }

    // int value = (int)name[6];
    // cout<<"value is "<< value <<endl; //



//   char name[100];
//   cin>>name;   // aman singh -- sirf aman print hoga kyuki ye spces wagera like tab ya enter ko read nhi krta
//   cout<<"full name "<<name<<endl;




//  char name[100];
// cin.getline(name, 50);  // ab ye spaces, tab ya enter sbko read krega ex- aman singh agar cin kre to aman singh print hoga wit spaces  
//  cout<<"full name "<<name<<endl;







 char name[100];
 cin>>name;
 //cout<<"length is "<<getLength(name)<<endl;
 cout<<"length is: "<<strlen(name)<<endl;  // is fn se sidha length print kr skte hai
 return 0;












}