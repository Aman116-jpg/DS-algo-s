#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;


int reversearray(char name[]){
    int i =0; 
  int n= strlen(name);
    int j = n-1;
    while(i<=j){
        swap(name[i], name[j]);
        i++;
        j--;
    }
}
int main(){
     // reverrse string
// mera tarike se

//   char name[100];
//   name[0] = 'a';
//   name[1] = 'm';
//   name[2] = 'a';
//   name[3] = 'n';

//   cout<<name[0]<<name[1]<<name[2]<<name[3]<<endl;

//   // reverse

//   for(int i = 3; i>=0; i--){
//     cout<<name[i];
//   }

  char name[100];
  //cin>>name;
  cin.getline(name, 50);
    
  cout<<"initially "<<name<<endl;

  reversearray(name);
  cout<<"after reversal "<<name<<endl;

}