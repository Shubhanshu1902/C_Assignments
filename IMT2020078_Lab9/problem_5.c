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
	node *ns;
	ns = (node *)malloc(sizeof(node));
	ns->value = n;
	ns->next = NULL;
	if (*head == NULL)
	{
		*head = ns;
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
	if (head == NULL)
	{
		printf("NULL");
	}
	node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	return;
}
void even_elements(node **head, node **head2)
{
	node *temp = *head;
	while (temp != NULL)
	{
		if (temp->value % 2 == 0)
			add_values(temp->value, head2);
		temp = temp->next;
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
		add_values(n, &head);
	}
	node *head2 = NULL;
	print_list(head);
	printf("\n");
	even_elements(&head, &head2);
	print_list(head2);
	return 0;
}
