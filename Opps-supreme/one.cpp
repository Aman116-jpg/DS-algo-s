#include<bits/stdc++.h>
using namespace std;

class Student{
    // int id; 
    // int age;
    // bool present; // 1 byte ka hota hai
   

    // double  id;  // double takes 8 byte
    // double roll;
    // bool sec;

    string name; // 24 byte khayega bc

    void study(){
        cout<< "studying"<<endl;

    }
    void sleep(){
        cout<<"sleeping"<<endl;

    }
    void bunk(){
        cout<<"bunking"<<endl;

    }

};

int main()
{
   // cout<< sizeof(Student)<<endl;  // size of empty class when there is 0 dataa members is  1  byte

    // cout<< sizeof(Student)<<endl; // when 3 dm are present in hich 2 are int type and one is of bool-----------> imp* hai ye 12 ans aayega -padding ka concept

 
    //   cout<< sizeof(Student)<<endl; // when 3 dm are present in which 2 are double type and one is of bool-----------> imp* hai ye 24 ans aayega --padding ka concept

   
    cout<< sizeof(Student)<<endl; // string 24 byte lega  -padding ka concept 



    // all these things takinng place due to padding , in which sbse bade datatype ke neareest multiple pe memory par le aao..these is how system compiler is designed


    // Student s1;
    // Student s2;


 return 0;
}
