/*Authur:-Shubhanshu Agrawal IM2020078*/
/*Problem 1: Write a program that inputs two integers (x and y) and outputs
f(x, y) up to two decimal places as defined below
f(x,y)=log(base e)y       x>=y
      =e^x		  otherwise
*/
#include <stdio.h>
#include <math.h>
int main(){
	int x,y;double f; //here f is the value of a function f(x,y)
	scanf("%i%i",&x,&y);
	if (x>=y){
		f=log(y);  //f(x,y)=log(base e)(y) for x>=y
	}
	else{
		f=exp(x); //f(x,y)=e^x for x<y
	}
	
	printf("%.2f\n",f);
	return 0;
}

