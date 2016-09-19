#include<stdio.h>
#include <iostream> 
using namespace std;
int main()
{
   int n, sum = 0, remainder;
 
   cout<<"Enter an integer\n";
   cin>>n;
    
   while(n != 0)
   {
      remainder = n % 10;
	  cout<<"The Remainder is "<<remainder<<endl;
      sum = sum + remainder;
	  cout"The Sum is "<<sum<<endl;
      n = n / 10;
	  cout"The n is "<<n<<endl;
   }
 
   cout<<"Sum of digits of entered number = "<<sum<<endl;
 
   return 0;
}
