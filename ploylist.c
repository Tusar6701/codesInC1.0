#include<stdio.h>
#include<stdlib.h>
struct node
{
	int c,e;
	struct node *next;
};
void create(struct node **);
void join(struct node **,struct node **);
void simplify(struct node *);
void multiply(struct node **,struct node **,struct node **);
void display(struct node *);
void main()
{
	struct node *h1=NULL,*h2=NULL,*h=NULL;
	printf("List 1 : ");
	create(&h1);
	display(h1);
	printf("List 2 : ");
	create(&h2);
	display(h2);
	printf("Multiplied list : ");
	multiply(&h,&h1,&h2);
	display(h);
	printf("Both lists joined : ");
	join(&h1,&h2);
	display(h1);
	printf("joined list simplified : ");
	simplify(h1);
	display(h1);
	printf("multiplied list simplified : ");
	simplify(h);
	display(h);
}
void display(struct node *h)
{
	struct node *ptr;
	for(ptr=h;ptr!=NULL;ptr=ptr->next)
		printf("%d,%d ; ",ptr->e,ptr->c);
	printf("\n");
}
void create(struct node **h)
{
	struct node *cur,*ptr=*h;
	for(int i=0;i<4;i++)
	{
		cur=(struct node *)malloc(sizeof(struct node));
		cur->e=i;
		cur->c=i;
		cur->next=NULL;
		if(*h==NULL)
			*h=ptr=cur;
		else
		{
			ptr->next=cur;
			ptr=cur;
		}
	}
}
void join(struct node **h1,struct node **h2)
{
	struct node *ptr;
	for(ptr=*h1;ptr->next!=NULL;ptr=ptr->next);
	ptr->next=*h2;
}
void multiply(struct node **h,struct node **h1,struct node **h2)
{
	struct node *ptr=*h,*ptr1,*ptr2,*cur;
	for(ptr1=*h1;ptr1!=NULL;ptr1=ptr1->next)
	{
		for(ptr2=*h2;ptr2!=NULL;ptr2=ptr2->next)
		{
			cur=(struct node *)malloc(sizeof(struct node));
			cur->e=ptr1->e + ptr2->e;
			cur->c=ptr1->c * ptr2->c;
			cur->next=NULL;
			if(*h==NULL)
				*h=ptr=cur;
			else
			{
				ptr->next=cur;
				ptr=cur;
			}
		}
	
	}
}
void simplify(struct node *h)
{
	struct node *ptr,*ptr1,*ptr2,*prv;
	for(ptr1=h;ptr1->next!=NULL;ptr1=ptr1->next)
	{
		prv=ptr1;
		for(ptr2=ptr1->next;ptr2->next!=NULL;)
		{
			if(ptr1->c==ptr2->c)
			{
				ptr1->e+=ptr2->e;
				prv->next=ptr2->next;
				ptr=ptr2;
				ptr2=ptr2->next;
				free(ptr);
			}
			else
			{
				prv=ptr2;
				ptr2=ptr2->next;
			}
		}
			
	}
	for(ptr=h;ptr->next!=NULL;ptr=ptr->next)
		prv=ptr;
	if(prv->c==ptr->c)
	{
		prv->e+=ptr->e;
		prv->next=NULL;
		free(ptr);
	}
		
}
