#include "functions.h"

int factorial(int n)
{
	if(N<0){
	cout<<"Enter positive number\n\n";
	cin>>n;
	factorial(n);
	//return -1;
	//this is master	

	return -1;	

}
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
