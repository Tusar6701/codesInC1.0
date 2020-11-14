#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct
{
	int a[MAX];
	int front;
	int top;
}QUEUE;
int pop(QUEUE *,int *);
int push(QUEUE *,int);
void main()
{
	int v;
	QUEUE Q1;
	Q1.top = -1;
	Q1.front=-1;
	printf("enter a value :- \n");
	scanf("%d",&v);
	int t = push(&Q1,v);
	int k = pop(&Q1,&v);
	printf("%d %d \n",t,k);
	printf("%d",v);
}
int pop(QUEUE *Q,int *v)
{
	int i;
	if(Q->top!=-1)
	{
	*v=Q->a[++(Q->front)];
	for(i=0;i<Q->top;i++)
		Q->a[i]=Q->a[i+1];
	Q->top--;
	return 0;
	}
	else
	{
	printf("QUEUE is empty .\n ");
	return -1;
	}
}
int push(QUEUE *Q,int v)
{
	if(Q->top==(MAX-1))
	{
		printf("Overflow");
		return(-1);
	}
	else
	{
		Q->a[++(Q->top)]=v;
		return 0;
	}
}

