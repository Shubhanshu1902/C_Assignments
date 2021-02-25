/*Author:-Shubhanshu Agrawal*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int value;
	struct node *next;
} node;

void add_values(int n, node **head)
{
	node* ns;
	ns=(node *)malloc(sizeof(node));
	ns->value = n;
	ns->next = NULL;
	if (*head == NULL)
	{
		*head=ns;
		return;
	}
	node *temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ns;
}

void print_list(node *head)
{
	node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	return;
}
void even_elements(node **head)
{
	node *temp=*head;
	if (temp==NULL)
	{
		return;
	}
	while (temp!=NULL)
	{
		if (temp->value%2!=0)
		{
			free(temp);
		}
		else
			
	}
	

}

int main()
{
	node *head = NULL;
	while (1)
	{
		int n;
		scanf("%d", &n);
		if (n == -999)
			break;
		add_values(n,&head);
	}
	//printf("%d\n",head->value);
	print_list(head);
	return 0;
}
