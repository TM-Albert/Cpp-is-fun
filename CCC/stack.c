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

void main()
{
		int choice;
		char ch;

		NODE *ps;

		ps->Top=-1;
		do
		{
			clrscr();
			//Menu for the stack operations
			printf("\n1 PUSH");
			printf("\n2 POP");
			printf("\n3 PRINTALL");
			printf("\nEnter your Choice = ");
			scanf("%d", &choice);
			switch(choice)
			{
				case 1:
					push(ps);
					break;
				case 2:
					pop(ps);
					break;
				case 3:
					printAll(ps);
					break;
				default:
					printf("\nYou Entered wrong choice");
			}
			printf("\n \nPress (Y/y) To Continue = ");
			//Removing all characters in the input buffer
			//for fresh input() especially <<ENTER>> key
			fflush(stdin);
			scanf("%c", &ch);
		} while(ch == 'Y' || ch == 'y'):
}
