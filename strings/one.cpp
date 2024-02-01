#include<iostream>
#include<string.h>
using namespace std;


// bool comparestring( string a, string b ){    
//    if(a.length() != b.length())
//    {
//      return false;
//    }
//     else{
//       int j=0; 
//     for(int i=0; i<a.length(); i++){
//          if(a[i] != b[i]){
//              return false;
//          }
      
//     }


//     }
//      return true;
    
// }
int main(){
  // string is a data type , c++ par documentation padh lena
    // string create
    string str;
    // input

    //  cin>>str;

    
// getline(cin, str);  // spaces bhi read krskte

    cout<<str;

  cout<<"length: "<<str.length()<<endl;  //lenght print krre str ki , baki aur bhi hai c++.com par padh lena 
  str.push_back('A');  // new char push krdiya str me and dhyan rahe sirf char hi push kr skte hai
  cout<<str<<endl;

  cout<<str.substr(0, 7)<<endl;   // str string ki index 0 se 7 tk print hogi,dont forget its imp


   string a = "aman";
   string b = "singh";
   if(a.compare(b) == 0){
    cout<<" it means a ans b are exactly same strings" <<endl;
   }
   else{
    cout<<"they're not" <<endl;
   }

   string x = "abcd";
   string y =  "acda";
    
   cout<<x.compare(y)<<endl;  // bool value return krta hai
 /*This function returns the following values according to the matching cases:
Returns 0 if both the strings are the same.
Returns < 0 (less than zero) if the value of the character of the first string is smaller as compared to the second string input.
Results out to be > 0 (greater than zero) when the second string is greater in comparison.*/



// strcmp() fn
   const char *str1 = "String Match";
    const char *str2 = "String Unmatch";

    std::cout << "String 1: " << str1 <<endl;
    std::cout << "String 2: " << str2 <<endl;

    if (strcmp(str1, str2) == 0)  // in built strcmp() fn.
       cout << "\nBoth the input strings are equal." <<endl;
    else
        cout << "\nThe input strings are not equal." <<endl;

   string sent ="hellu ji kaise ho sare";
  //  string target  = "hellu";
  string target = "ji";
   //cout<<senc.find(target)<<endl;  // hellu ki starting  index no 0 se horhi hai so 0 hi return hoga
cout<<sent.find(target)<<endl;   // ji ki starting  index no 6 se horhi hai so 6 hi return hoga


string mess = "this is my first message";
string word = "aman";
mess.replace(0, 4, word);  // index 0 se 4 char ko replace krke aman daal do mess string k andar
cout<<mess<<endl;

string strrr = "ABCDEFGHIJKLMNOPQRST";
strrr.erase(0,4); // index 0 se lekr 4 char erase krdiya
cout << strrr;
    return 0;
}