/*Author:-Shubhanshu Agrawal*/
/*Write a (C) program with a recursive function with prototype int
is_palindrome(int x). The function is_palindrome returns 1 if the input number
x is a palindrome, and 0 elsewhere. The function is_palindrome should be called in the
main function. If the function is_palindrome returns 1, output Yes else output No.
1
Note: A number is a palindrome if it remains the same when read from either right to left or
right to left. The input x is guaranteed to be in the range of int datatype.*/


#include <stdio.h>

int is_palindrome(int x,int x1,int t)     //Function to check weather the number is palindrome or not 
										  // x=input number
										  // x1=to calc reverse of a number
										  // t=to save initital x
{
	if (x==0)
	{
		if (x1==t) return 1;
		else return 0;
	}
	x1=x1*10+x%10;
	return is_palindrome(x/10,x1,t);	
}

int main()
{
	int x,x1=0;
	scanf("%d",&x);
	int t=x;
	int y=is_palindrome(x,x1,t);
	if (y==0) printf("NO");
	else printf("YES");
	return 0;
}
	