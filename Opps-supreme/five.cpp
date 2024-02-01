#include<bits/stdc++.h>
using namespace std;

class Bird{

    public:
    int age;
    int weight;
    string color;
    int nol;

    void eat(){

        cout<<"bird is eating"<<endl;

 
    }

    void fly(){
        cout<<"bird is flying"<<endl;

    }

};

class Sparrow: public Bird
{ 
    public:
    Sparrow(int age, int weight, string color, int nol)
    {
        this->age = age;
        this->weight = weight;
        this->color = color;
        this->nol = nol;


    }


    void grassing(){
        cout<<"sparrow is grassing"<<endl;
    }
};

class peigon: public Bird
{
    public : 
    void guttering(){
    cout<<"peigon is guttering"<<endl;
    }
};







int main()  // we're learning about inheritence
{

    Sparrow s(1,1,"brown", 2);
   cout<<s.color <<endl;


 
 return 0;
}