#include<bits/stdc++.h>
using namespace std;


class Student
{
private:
    string gf;

public:
    int id;
    int age;
    bool present;
    string name;
    int nos;

    void study()
    {
        cout << "studying" << endl;
    }
    void sleep()
    {
        cout << "sleeping" << endl;
    }
    // getter setter
    string getName(){   // getter
        return gf;
        //  return this->gf  // aise bhi kr skte hai
    }
    string setName(string gf ){  // setter 
        this-> gf = gf;
        return this->gf;
    }

    Student()
    {
        cout << " hello chicks and dicks " << endl;
    }

    // parameterised constructor.
    Student(int _id, int _age, bool _present, string _name, int _nos)
    {
        cout<<"parameterised ctor called"<<endl;
        // id = _id;
        // age = _age;
        // present = _present;
        // name = _name;
        // nos = _nos;

        // more accurate using this keyword
        // this-> is a pointer that points to current object
        this->id = _id;
        this->age = _age;
        this->present = _present;
        this->name = _name;
        this->nos = _nos;
    }

    ~Student(){
        cout<<"student destructor(dtor) called"<<endl;
    }

};

int main()
{

    // main fn ke khtm hote hi destructor call hoga, v.imp thing is kisi bhi scope ke andar obejct created hai uss scope ke bahar jate hai dtor call ho jata hai

//  Student s1(1, 12, 1, "chota bheem", 1);
//  cout<< s1.name <<endl;


 {

     Student s1(1, 12, 1, "chota bheem", 1);
 cout<< s1.name <<endl;
 //cout<<s1.getName()<<endl;
 s1.setName("rani indumati");
 cout<<s1.getName()<<endl;


 }

  Student s2;
 


 return 0;
}
