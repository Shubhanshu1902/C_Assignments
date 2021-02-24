/*Author:-Shubhanshu Agrawal*/
#include <stdio.h>
//logic:-
// I defined a pointer i which is the number of elements in array

int Push(int push_no, int arr[], int i)				//to push element at last position of array
{
	if (i >= 5)										//checking that array has any more space
							
		return -1;

	arr[i] = push_no;

	return 0;
}

int Pop(int arr[], int i)							// to remove last element of array
{
	if (i <= 0)										//checking that array has any element
											
		return -1;

	return arr[i];									
}

void Display(int arr[], int i)						//To display array
{
	if (i <= 0)
	{
		printf("STACK EMPTY");
	}
	else
	{
		for (int j = i-1; j >= 0; j--)
		{
			printf("%d ", arr[j]);
		}
	}
}

int main()
{
	int arr[5], i = 0;
	int value = 1;
	char quer;
	int push_no;
	while (1)
	{
		scanf("%c", &quer);

		if (quer == 'a')
		{
			scanf("%d", &push_no);
			if (Push(push_no, arr, i) == -1)
			{
				printf("STACK OVERFLOW\n");
				break;
			}
			Push(push_no, arr, i);
			i += 1;
		}
		else if (quer == 'b')
		{
			if (Pop(arr, i) == -1)
			{
			    printf("STACK UNDERFLOW\n");
		    	break;
			}

			else
			{
				Pop(arr, i);
				i -= 1;
			}
		}
		else if (quer == 'c')
		{
			Display(arr, i);
			break;
		}
	}
	return 0;
}
