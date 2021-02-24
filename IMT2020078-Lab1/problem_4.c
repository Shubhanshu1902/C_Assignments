/*Author:-Shubhanshu Agrawal IMT2020078*/
/*Problem 4:-Given two positive integers (read from the input), write a program to print the remainder and the quotient, respectively, when the first integer is divided by the second integer.*/




#include <stdio.h>
int main(){
	int x,y;
	int ques,rem;
	scanf("%i%i",&x,&y);
	
	rem=x%y;// remainder
	ques=(x-rem)/y; //eulid's division lemma //quotient
	printf("%i %i",rem,ques);
	return 0;
}

