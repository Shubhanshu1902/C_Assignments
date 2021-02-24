/*Author:-Shubhanshu Agrawal*/
#include <stdio.h>

void circulating_list(int *arr,int n,int circ)
{
	int t;
	for(int i=0;i<circ;i++)
	{
		t=*(arr);							//storing first element to a temporary variable 
		for (int j = 0; j < n-1; ++j)		//shifting every other element towards left by 1 position
		{							
			*(arr+j)=*(arr+j+1);			
		}
		*(arr+n-1)=t;						//last element= temporary variable 
	}
}

int main()
{
	int rows,columns;
	int circ;
	scanf("%d%d",&rows,&columns);
	int mat[rows][columns];
	for (int i = 0; i < rows; ++i)			//taking matrice input
	{
		scanf("%d",&circ);
		for (int j = 0; j < columns; ++j)
		{
			mat[i][j]=i+j;
		}
		circulating_list(mat[i],columns,circ);		//circulating each row of matrix
	}
	for (int i = 0; i < rows; ++i)					//printing matrix
	{
		for (int j = 0; j < columns; ++j)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
