/*Author:-Shubhanshu Agrawal*/
#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	scanf("%s", a); //aabbccc
	int k = 1;
	char res[strlen(a)];
	res[0] = a[0];
	printf("%c", a[0]);
	for (int i = 1; i < strlen(a); ++i)
	{
		int o = 1;
		for (int j = 0; j < k; ++j)
		{
			if ((char)a[i] == (char)res[j])
			{
				o = 0;
				break;
			}
		}
		if (o == 1)
		{
			res[k] = a[i];
			k++;
			printf("%c", a[i]);
		}
	}
	return 0;
}
