#include<stdio.h>
#include<conio.h>

#define MAXSIZE 100

struct stack
{
	int stack[MAXSIZE];
	int TOP;

};

typedef struct stack NODE;

void push(NODE *pu)
{
	int item;

	if(pu->Top == MAXSIZE - 1)
	{
		printf("\nThe Stack is Full");
		getch();
	}
	else
	{
		printf("\nEnter the Element to be inserted = ");
		scanf("%d", &item);
		pu->stack[++pu->Top]=item;
	}
}

void pop(NODE *po)
{
	int item;

	if(po->TOP == -1)
	{
		printf("\nThe Stack is Empty");
	}
	else
	{
		item = po->stack[po->Top--];
		printf("\nThe Deleted Element is = %d", item);
	}
}

void printAll(NODE *pt)
{
	int item;

	if(pt->Top == -1)
	{
		printf("\nThe Stack is Empty");
	}
	else
	{
		printf("\n \nThe elements in the Stack is/are...");
		for(i = pt->Top; i >= 0; i--)
		{
			printf("\n %d", stack[i]);
		}
	}
}
