/*Author:-Shubhanshu Agrawal IMT2020078*/
/*Problem 3:-Write a program that takes n as input and gives the average of the squares of the first n natural numbers. (Give output up to 2 decimal places)*/



#include <stdio.h>
int main(){
	int n,i;
	float avg,sum;
	sum=0;
	scanf("%i",&n);
	for (i=1;i<=n;++i){
		sum+=i*i;
	}
	avg=sum/n;  //Compiler first produces a integral result of sum/n(if sum is int) and then converts it to float
	printf("%0.2f",avg); 
	return 0;
}



