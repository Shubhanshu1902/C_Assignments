/*Author:-Shubhanshu Agrawal*/
#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];				//defining string a
	scanf("%s", a); 
	int k = 1;					//iterator for result string
	char res[strlen(a)];		//defining result string
	res[0] = a[0];				//setting first element of string as first element of a
	printf("%c", a[0]);			
	for (int i = 1; i < strlen(a); ++i)		
	{
		int o = 1;				//value which is 1 if character is unique and 0 if not 
		for (int j = 0; j < k; ++j)
		{
			if ((char)a[i] == (char)res[j])		
			{
				o = 0;
				break;
			}
		}
		if (o == 1)				//setting res[k] as a[i] if o is 1 
		{
			res[k] = a[i];
			k++;
			printf("%c", a[i]);
		}
	}
	return 0;
}
