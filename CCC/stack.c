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
