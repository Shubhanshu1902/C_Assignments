/*Author:-Shubhanshu Agrawal*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int value;
	struct node *next;
} node;

node *current = NULL;

int main()
{
	node *head=NULL;
	node *ns=NULL;
	int j=0;
	while(1)
	{
		int n;
		scanf("%d",&n);
		if (n==-999)
			break;
		if (j==0)
		{
			head=(node*)malloc(sizeof(node));
			head->value=n;
			head->next=NULL;
		}
		else
		{
			ns->value
		}

	}
	return 0;
}
