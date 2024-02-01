#include<iostream>
#include<vector>
using namespace std;
int main(){
   // vector array-----dynamic array
   // cplusplus.com par jakar documentation padh lo

   vector<int>arr; // ek dynamic array bana liya jiska data type int hai aur naam arr hai
   int ans= (sizeof(arr)/sizeof(int));
   cout<<ans <<endl;
   cout<<arr.size()<<endl;  // array ki biidefault size ka pta chalega mtlb array k andar kitne elements pade hai wo pta chlega
   cout<<arr.capacity()<<endl; //array ki  capacity ka pta chalega means kitne element sko apne andar store kr skta hai
   
/*
//insert elements in array
   arr.push_back(5);  // 5 insert krdiya
   arr.push_back(6); // 6 insert krdiya

   //deleting elements
 //  arr.pop_back(); // array ke andar ka last wala element delete ho jayega

   //print 
   for(int i=0; i<arr.size(); i++) {
    cout<<arr[i]<<" ";
   }
   cout<<endl;


*/



//vector<int>brr(10); // brr naam ki vector aray bana li jiska size 10 hai and value bidefault 0 se initialised hai

// vector<int>brr(10, -1); // brr naam ki vector aray bana li jiska size 10 hai and value bidefault -1 se initialised hai


 int n;
  cout<<"enter the value of n "<<endl;
  cin>>n; vector<int> brr(n);  // run time par hmne n size ka vector array bana liya aur usko 0 se initialised krdiya




//   vector<int>brr{10,30,50,49}; // array ke andar ye 4 elements store krliya
//   brr.pop_back();

 
cout<<"size of b "<<brr.size()<<endl;
cout<<"capacity of b "<<brr.capacity()<<endl;
// cout<<" "<<brr.empty()<<endl; // agar array empty hai toh 1 return hoga agar nahi toh 0 


for(int i=0; i<brr.size(); i++) {
   //  cout<<brr[i]<<" ";
   cin>>brr[i];
   }
   cout<<endl;



for(int i=0; i<brr.size(); i++) {
    cout<<brr[i]<<" ";
    //cin>>brr[i]<<" ";
    }
    cout<<endl;




   




































}