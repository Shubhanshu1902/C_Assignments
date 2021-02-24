/*Author:-Shubhanshu Agrawal*/
#include <stdio.h>

void sort(int *arr,int n)							//sorting of array
{
	int t;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if (*(arr+i)>*(arr+j))
			{
				t=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=t;
			}			
		}
	}
		
}

void combine(int m,int *arr1,int n,int *arr2)		//to combine the arrays
//logic:-
//i is the number of elements combined in arr1
//j is the number of elements combined in arr2
//z is total number of elements in resultant array
//first we will sort both arrays
//first while loop will calculate till any i and j dont become len(arr1) and len(arr2)
//second and third considering whinch array element are left while loop will add all the remaining elements in resultant array
{
	sort(arr1,m);
	sort(arr2,n);
	int res[m+n];
	int *t = res;
	int i=0,j=0,z=0;
	while (i!=m && j!=n)
	{
		if (*(arr1+i) <=*(arr2+j))
		{
			res[z]= *(arr1+i);
			i++;
			z++;
		}
		else 
		{ 
			res[z]= *(arr2+j);
			j++;
			z++;
		}	
	}

	while (i!=m)
	{
		res[z]= *(arr1+i);
		i++;
		z++;
	}

	while (j!=n)
	{
		res[z]= *(arr2+j);
		j++;
		z++;
	}

	for (int i = 0; i < (m+n); ++i)
	{
		printf("%d ",*t);
		t++;
	}
}

int main()
{
	int m;
	scanf("%d",&m);
	int arr1[m];
	
	for (int i = 0; i < m; i++)
	{		
		scanf("%d",&arr1[i]);
	}
	
	int n;
	scanf("%d",&n);
	int arr2[n];
	
	for (int i = 0; i < n; i++)		
	{
		scanf("%d",&arr2[i]);
	}
	
	combine(m,arr1,n,arr2);
	return 0;
}
	