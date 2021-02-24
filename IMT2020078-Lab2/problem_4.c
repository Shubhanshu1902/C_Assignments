/*Author:-Shubhanshu Agrawal IMT2020078*/
/*Write a program that inputs a number between 0 and 99999 and calculate the sum of its digits.
(Hint: Use the modulus operator ’%’)*/
#include <stdio.h>
int main(){
	int n,sum_of_digits=0,rem; //here n=number to be input
				    //     rem=reminder after dividing by 10
	scanf("%d",&n);
	while(n>0){

		rem=n%10;
		sum_of_digits+=rem;
		n=n/10;}
	printf("%d",sum_of_digits);
	return 0;
}

