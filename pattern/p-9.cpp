#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
     for(int i=0; i<n; i++){
        // for spaces
        for(int j=0; j<i; j++){
            cout<<"   ";

        }
        // for stars
        for(int j=0; j< 2*n -(2*i + 1); j++){
            cout<<" * ";

        }
        //for spaces
        for(int j=0; j<i; j++){
            cout<<"   ";

        }
        cout<<endl;
    }
}