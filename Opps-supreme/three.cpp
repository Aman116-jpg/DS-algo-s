#include <bits/stdc++.h>
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

    Student()
    {
        cout << " hello chicks and dicks " << endl;
    }

    // parameterised constructor.
    Student(int _id, int _age, bool _present, string _name, int _nos)
    {
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

    // copy ctor
    Student(const Student &srcobj)
    {

        cout << "student copy ctor called" << endl;
        this->name = srcobj.name;
        this->age = srcobj.age;
        this->nos = srcobj.nos;
        this->present = srcobj.present;
        this->id = srcobj.id;
    }

    // ~Student(){
    //     cout << " student destructor called"<<endl;
    // }
};

int main()
{

    // copy ctor(constructor)
    Student s1(1, 12, 1, "chota bheem", 1);
    //   Student s2 = s1; // default ctor call nhi hoga kyuki s2 ke andar s1 ko hi initialize kiya hai hmne

    //    Student s2;  // ab hoga default ctor call.

    //    Student s2 = s1;
    //  s2 = s1;  // ab dono kaam hoga default cctor call bhi hoga aur copy  bhi banega

    // cout<< s1.name <<endl;
    // cout<< s2.name <<endl;

    // Student s2 = s1; // copy ctor call hoga aur s1 ke andar ka data s2 me copy ho jayega
    //  Student s2(s1); // another way of doing the same as above

    Student s2 = s1; 
    cout << s1.name << endl;
    cout << s2.name << endl;
 
    return 0;
}