/*Author:-Shubhanshu Agrawal*/
/*Write a (C) program to compute the greatest common divisor of two positive
integers m and n given by Euclid’s algorithm using a recursive function.
Hint: Euclid’s algorithm works on the principle gcd(a, b) = gcd(a, b%a) when a ≤ b.*/
#include <stdio.h>
//to calculate gcd of a number using euclids theorem
int gcd(int a, int b)
{
	if (b>=a)					 
	{
		if (b%a==0) 				
			return a;
		return gcd(a,b%a);
	}
	else
	{
		if (a%b==0) 			
			return b;
		return gcd(a%b,b);
	}
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",gcd(a,b));	
	return 0;
}
