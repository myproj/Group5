#include<stdio.h>
// 
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
	  printf("The Remainder is %d\n", remainder);
      sum = sum + remainder;
	  printf("The Sum is %d\n", sum);
      n = n / 10;
	  printf("The n is %d\n", n);
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
 
   printf("Sum of digits of entered number = %d\n",sum);
 
   return 0;
}
