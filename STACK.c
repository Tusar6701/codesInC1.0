#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct
{
	int a[MAX];
	int top;
}STACK;
int pop(STACK *,int *);
int push(STACK *,int);
void main()
{
	int v;
	STACK s1;
	s1.top = -1;
	int t = push(&s1,15);
	int k = pop(&s1,&v);
	printf("%d %d",t,k);
}
int pop(STACK *s,int *v)
{
	if(s->top==(-1))
	{
		printf("Underflow");
		return -1;
	}
	else
	{
		*v=s->a[s->top];
		s->top--;
		return 0;
	}
	
}
int push(STACK *s,int v)
{
	if(s->top==(MAX-1))
	{
		printf("Overflow");
		return(-1);
	}
	else
	{
		s->top++;
		s->a[s->top]=v;
		return 0;
	}
}

	
