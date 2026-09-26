#include<stdio.h>
#include<conio.h>
#define MAX 100
typedef struct Stack
{
	int top, data[MAX];
}Stack;
void initStack(Stack *stk)
{
	stk->top=-1;
}
//=============================
int isEmptyStack(Stack *stk)
{
	if(stk->top==-1)
	return 1;
  return 0;
}
//==============================
int isFullStack(Stack *stk)
{
	if(stk->top==MAX-1)
	return 1;
  return 0;
}
//===============================
void push(Stack *stk,int n)
{
	if(!isFullStack(stk))
	{
		stk->top++;
		stk->data[stk->top]=n;
		return;
	}
	printf("Stack is Full");
}
//================================
int pop(Stack *stk)
{
	int x;
	if(!isEmptyStack(stk))
	{
		x=stk->data[stk->top];
		stk->top--;
		return
	}
	printf("Stack is Empty");
	return -1;
}
//================================
void main()
{
	Stack stack;
	initStack(&stack);
	push(&stack,10);
	push(&stack,20);

	printf("poped = %d\n",pop(&stack));
	printf("poped = %d",pop(&stack));
	getch();
}

