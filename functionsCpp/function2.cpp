#include<iostream>
using namespace std;

int max(int a, int b, int c){
    if(a>b && a>c){
        cout<<"a is greatest: ";
        return a;
    }
    else if(b>a && b>c){
        cout<<"b is greatest: ";
        return b;
    }
    else{
        cout<<"c is greatest: ";
        return c;
    }
}

void count(int n){
 for(int i =1; i<=n; i++){
    cout<<i<<" ";
 }
 cout<<endl;
}


char getgrade(int marks){
    // if(marks>= 90)
    // return 'A';  // YAHA HM CHAR TYPE KA DATA RETURN KRRHE HAI SO ISLIYE HME MENTION KRNA PADEGA RETURN TYPE ME
    // else if(marks>= 80)
    //     return 'B';
    // else if(marks>=70)
    //     return 'C';
    // else if(marks>= 60)
    //      return 'D';
    // else
    // return 'E';     

    // same code hm switch case ki help se bhi likh skte hai     
   switch(marks/10){          // assuming marks is btw 0 to  100
    case 10 : return 'A';break;
    case 9 : return 'A'; break;
    case 8 : return 'B'; break;
    case 7 : return 'C'; break;
    case 6 : return 'D'; break;
    default : return 'E';break;

   }

    
}

int sumEven(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
      if(i%2!=0){
        continue;
      }
      cout<<i<<endl;
      sum = sum + i;
    }
    cout<<"the sum of even numbers are: ";
    return sum;
}
int main(){
    // int a;
    // cout<<"enter a: ";
    // cin>>a;

    // int b;
    // cout<<"enter b: ";
    // cin>>b;

    // int c;
    // cout<<"enter c: ";
    // cin>>c;

  //  int result = max(a,b,c);
  //  cout<<result;


//   int n;
//   cout<<"enter n: ";
//   cin>>n;
//   count(n);

// int marks;
// cout<<"enter the marks: ";
// cin>>marks;
// char finalgrade = getgrade(marks);
// cout<< finalgrade;
//     return 0;
    
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    int result = sumEven(n);
    cout<<result;
    return 0;


}