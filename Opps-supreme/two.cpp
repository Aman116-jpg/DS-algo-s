#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
    string gf;

    public:
     int id; 
    int age;
   bool present;
   string name;
   int nos;



    void study(){
        cout<< "studying"<<endl;

    }
    void sleep(){
        cout<<"sleeping"<<endl;
 
    }


     // default constructor. this will get called in case of no parsmeter
    Student () {
        cout << " hello chicks and dicks "<< endl;
    }  



    // parameterised constructor.
    Student(int _id, int _age, bool  _present, string _name, int _nos){
        // id = _id;
        // age = _age;
        // present = _present;
        // name = _name;
        // nos = _nos;

        // more accurate using this keyword
        // this-> is a pointer that points to current object
        this-> id = _id;
       this-> age = _age;
       this-> present = _present;
       this-> name = _name;
       this-> nos = _nos;
        
    }

};
  


int main()
{
    Student s1;  // stack me memory allocate hoti hai
   // s1.gf; // by default class ki sari info private hoti hai so awie hi access nhi kr skte

    // and we know object banate hi defaault constructor call ho jata hai and remember bidefault constuctor public hota hai so agar hm khud ka constructor banayenge toh public me hi banayege




    // is case me parameterised constructor hi call hoga , default wala nhi
    Student s2(1,12,1,"CHOTA bheem", 1);
    cout<<s2.name<<endl;

    cout<< s2.id<<endl;

    
    Student s3(2, 15, 0, "lokesh",  5 );
    cout<<s3.name<<endl;


    Student *s4 = new Student(4, 15, 0, "bhupender jogi",  5);  // iss trh se heap me memeory allocate krre hai--dynamic allocation
  cout << s4->name <<endl;  // iss trh se acccess krna hota hai jb heap me allocate krte hai
  cout << (*s4).name<<endl;   // iss trh se bhi acccess kr skte haii jb heap me allocate krte hai, stack me allocate jo hoti unko dot se access krte hai

 return 0;
}