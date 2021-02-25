/*Author:-Shubhanshu Agrawal*/
#include <stdio.h>
typedef long long int lli;

lli leftshift(unsigned int n,unsigned int shift)
{
	return n<<shift;
}

lli rightshift(unsigned int n,unsigned int shift)
{
	return n>>shift;
}

lli and(unsigned int a,unsigned int b)
{
	return a&b;
}

lli or(unsigned int a,unsigned int b)
{
	return a|b;
}
int main()
{
	unsigned int a,b;
	char l;
	scanf("%d %d %c",&a,&b,&l);
	lli (*lefts)(unsigned int,unsigned int)=leftshift;
	lli (*rights)(unsigned int,unsigned int)=rightshift;
	lli (*ands)(unsigned int,unsigned int)=and;
	lli (*ors)(unsigned int,unsigned int)=or;

	switch (l)
	{
	case 'L':
		printf("%lld",(lefts)(a,b));
		break;
	
	case 'R':
		printf("%lld",(rights)(a,b));
		break;
	
	case 'A':
		printf("%lld",(ands)(a,b));
		break;
	
	case 'O':
		printf("%lld",(ors)(a,b));
		break;
	};
	return 0;
}
