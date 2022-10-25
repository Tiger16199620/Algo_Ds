#include<iostream>
using namespace std;

int main() {
int number, reverse = 0;
cout<<"Enter a Number to Reverse and press Enter: ";
cin>> number;     // Taking Input Number in variable number

   for( ; number!= 0 ; )
   {
      reverse = reverse * 10;
      reverse = reverse + number%10;
      number = number/10;
   }
   cout<<"Reversed Number is:  "<< reverse;
   return 0;

}
