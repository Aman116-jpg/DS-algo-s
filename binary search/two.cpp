#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
        

        // Binary search ke liye pre defined function bhi hai jisse sidha pata chal jayega answer hai ya nahi

    vector<int>arr{1,2,3,4,5,6};
   

     if(binary_search(arr.begin(), arr.end(), 3)){   // searching for 3 in vector array
         cout<<"found "<<endl;
     }
     else{
         cout<<" not found "<<endl;
     }

      cout<<endl;

       // searching for 3 in static array

     int brr[] = {1,2,3,4,5,6,7};
    int size = 7;

    if(binary_search(brr, brr + size, 7)){   // searching for 7 in static array
        cout<<"found "<<endl;
    }
    else{
        cout<<" not found "<<endl;
    }


}