#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i =0; i<5; i++){
        cout<<"love"<<endl;
        break; // jaise hi ye hit hoga sidha loop se bahar nikal jayenge
    }
    cout<<"babbar"<<endl;

    /*for(int j = 0; j<5; j++ ){
        continue; // chalo chalo tau ji wala example
        cout<<"love"<<endl;
    }*/

    for(int j = 1; j<5; j++ ){
        
        if(j==3){
            continue;  // iteration no. 3 ko skip krdega maens 3 print nhi hoga
        }
        cout<<j<<endl; 

    }
}