#include <iostream>
using namespace std;
int main()
{

   // given an array containing elements from 1 to 20 expect one element in this range which is missing ,find the missing element
   // we can also do this for n
   int arr[19] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
   int sum = 0;
   int sum2;
   for (int i = 0; i < 19; i++)
   {
      sum = sum + arr[i];
   }
   sum2 = 20 * (20 + 1) / 2;

   cout << "the missing no. is " << sum2 - sum;
}



// repeated wala krlena time nikal kr