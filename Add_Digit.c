#include<stdio.h>
#include <iostream> 
using namespace std;
int main()
{
   int n, sum = 0, remainder;
 
   printf("Enter an integer\n");
   scanf("%d",&n);
   // Code is to add digits of a number
    //Comments added to the file
   int check = 0;
   if(n<0){
      n*=-1;
      check = 1;
   }
   while(n/10!= 0)
   {
      remainder = n % 10;
	  cout<<"The Remainder is "<<remainder<<endl;
      sum = sum + remainder;
	  cout"The Sum is "<<sum<<endl;
      n = n / 10;
	  cout"The n is "<<n<<endl;
   }
   if(check){
     n*=-1; 
     remainder = n % 10;
      sum = sum + remainder;
   }
   else
   {
      remainder = n % 10;
      sum = sum + remainder;
   }

   printf("The Sum is %d\n", sum);
   printf("The Remainder is %d\n", remainder);
 
   cout<<"Sum of digits of entered number = "<<sum<<endl;
 
   return 0;
}
