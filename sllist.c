#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void create(struct node **);
void insert(struct node **,int,int);
void delete(struct node **,int*,int);
void display(struct node *);
void main()
{
	int p,v,f=0;
	struct node *head=NULL;
	create(&head);
	display(head);
	printf("Enter 1 to begin insertion else enter 0 : ");
	scanf("%d",&f);
	while(f==1)
	{
		printf("Enter value and position where to insert :- \n");
		scanf("%d%d",&v,&p);
		insert(&head,v,p);
		display(head);
		printf("Enter 1 to insert another value else enter 0 : ");
		scanf("%d",&f);
	}
	display(head);
	printf("Enter 1 to begin deletion else enter 0 : ");
	scanf("%d",&f);
	while(f==1)
	{
		printf("Enter position to be deleted from :- \n");
		scanf("%d",&v);
		delete(&head,&v,p);
		display(head);
		printf("Enter 1 to delete another value else enter 0 : ");
		scanf("%d",&f);
	}
	display(head);
}
void display(struct node *h)
{
	struct node *ptr;
	for(ptr=h;ptr!=NULL;ptr=ptr->next)
	{
		printf("%d ",ptr->data);
	}
	printf("\n");
}
void create(struct node **h)
{
	struct node *cur,*ptr=*h;
	for(int i=0;i<4;i++)
	{
		cur=(struct node *)malloc(sizeof(struct node));
		cur->data=random()%11;
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
void insert(struct node **h,int v,int p)
{
	struct node *cur,*ptr=*h;
	cur=(struct node *)malloc(sizeof(struct node));
	cur->data=v;
	cur->next=NULL;
	if(*h==NULL)
		*h=cur;
	else 
	if(p==0)
	{
		cur->next=*h;
		*h=cur;
	}
	else 
	{
		for(int i=0;i<p-1 && ptr->next!=NULL;i++,ptr=ptr->next);
		cur->next=ptr->next;
		ptr->next=cur;
	}
}
void delete(struct node **h,int *v,int p)
{
	struct node *ptr=*h,*prv;
	if(*h==NULL)
		printf("No elements present to delete :- \n");
	else if(p==0 && ptr->next==NULL)
	{
		*v=ptr->data;
		*h=NULL;
		free(ptr);
	}
	else if(p==0)
	{
		*v=ptr->data;
		*h=ptr->next;
		free(ptr);
	}
	else
	{
		for(int i=0;i<p && ptr->next!=NULL;i++,ptr=ptr->next)
			prv=ptr;
		prv->next=ptr->next;
		free(ptr);
	}
}
			
		
	
	
