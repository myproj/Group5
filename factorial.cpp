#include "functions.h"

int factorial(int n)
{
	if(N<0){
	printf<<"Enter positive number\n\n";
	cin>>n;
	factorial(n);
}
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
