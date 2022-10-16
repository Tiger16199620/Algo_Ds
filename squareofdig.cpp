#include<iostream>

using namespace std;
int main()
{
   int num, rem, sq, sum=0;
   cout<<"Enter a Number: ";
   cin>>num;
   while(num>0)
   {
      rem = num%10;
      if(rem==0)
         sq = 1;
      else
         sq = rem*rem;
      sum = sum + sq;
      num = num/10;
   }
   cout<<"\nSum of squares of all digits = "<<sum;
   cout<<endl;
   return 0;
}
