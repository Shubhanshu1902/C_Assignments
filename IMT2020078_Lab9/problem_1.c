#include <stdio.h>
#include <string.h>
#define max 1000

int main()
{
	char a[max]; 										//defining char 
	scanf("%s",a);										//taking string as input
	int count_open=0,count_close=0,b=0;					//count_open is for counting open brackets
														//count_close is for counting close brackets
														//b is iterator which runs through string

	while (b<strlen(a))
	{
		if ((char)a[b]=='(' || (char)a[b]=='[' || (char)a[b]=='{')		
			count_open+=1;
		else if ((char)a[b]==')' || (char)a[b]==']' || (char)a[b]=='}')
			count_close+=1;
		
		if (count_open<count_close)
		{
			printf("INVALID\n");
			break;
		}
		b++;
	}
	if (count_open>count_close)
		{
			printf("INVALID\n");
		}
	else if (count_open==count_close)
		printf("VALID");
}
	