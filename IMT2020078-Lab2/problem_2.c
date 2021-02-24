/* Author:-Shubhanshu Agrawal IMT2020078*/
/* Problem 2: Consider the polynomial f(x) =x^4-x^3-24x^2+4x+80
Write a program to input a number x in floating point format and then print
"Root" if the given input x is a root of f(x). If the input x is not a root, then
print the sign of f(x) ("Positive" or "Negative")*/



//root of f(x)=2,5,-2,-4 
//f(x) is negative for x in range (2,5) or (-2,-4)  rest all are positive


 
#include <stdio.h>

int main(){
	float x; 
	scanf("%f",&x);
	
	if(x==2||x==5||x==-2||x==-4){				
		printf("Root");

	}
	else if ((x>2 && x<5)||(x>-4 && x<-2)){
		printf("Negative");}
	else{
		printf("Positive");}
	return 0;}
	
