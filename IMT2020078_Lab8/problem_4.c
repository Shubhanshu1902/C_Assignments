/*Author:-Shubhanshu Agrawal*/
/*Task:-To calculate matrix multiplication*/
#include <stdio.h>

void matrx_multiplication(int n1,int mat1[][n1],int m1,int n2,int mat2[][n2],int m2);      //Function to find out matrix multiplication

int main()
{
	int m1,n1,m2,n2;
	scanf("%d%d%d%d",&m1,&n1,&m2,&n2);	   
	int mat1[m1][n1],mat2[m2][n2];

	for (int i = 0; i < m1; ++i)           //To input matrix mat1
	{
		for (int j= 0; j < n1; ++j)
		{
			scanf("%d",&mat1[i][j]);
		}
	}

	for (int i = 0; i < m2; ++i)			//To input matrix mat2
	{
		for (int j= 0; j < n2; ++j)
		{
			scanf("%d",&mat2[i][j]);
		}
	}

	matrx_multiplication(n1,mat1,m1,n2,mat2,m2);
	return 0;
}

void matrx_multiplication(int n1,int mat1[][n1],int m1,int n2,int mat2[][n2],int m2) 
{
	if (n1!=m2)								//To check the necessary condition of matrix to be multipliable
		printf("NOT POSSIBLE");
	
	else
	{
		int res[m1][n2];					//result_matrix will have m1 rows and n2 columns

		for (int i = 0; i < m1; i++)		//To set all the values of result to be zero
		{
			for (int j = 0; j < n2;j++)
			{
				res[i][j]=0;
			}
		}

		for (int i = 0; i < m1; i++)		//res element are the sum of multiplication of each element of rows of mat1 and columns of mat2
		{
			for (int j = 0; j < n2;j++)
			{
				for (int k = 0; k < m2;k++)
				{
					res[i][j]+=mat1[i][k]*mat2[k][j];
				}
			}
		}

		for (int i=0;i < m1; i++ )			//To print matrix
		{
			for (int j = 0; j < n2; j++)
			{
				printf("%d ",res[i][j]);
			}
			printf("\n");	
		}
	}x
}