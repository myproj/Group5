#include "functions.h"

int factorial(int n)
{
	if(N<0){
	cout<<"Enter positive number\n";
	cin>>n;
	factorial(n)
}
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
