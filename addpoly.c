#include<stdio.h>
#include<stdlib.h>
struct poly
{
	int coeff;
	int exp;
	struct poly *next;
};
void create(struct poly **head)
{
	struct poly *cur,*ptr;
	int n;
	printf("Enter the no. of terms \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cur=(struct poly *)malloc(sizeof(struct poly));
		scanf("%d%d",&cur->coeff,&cur->exp);
		cur->next=NULL;
		if(*head==NULL)
		{
			ptr=*head=cur;
			
		}
		else
		{
			ptr->next=cur;
			ptr=cur;
		}
	}
}
void join(struct poly **head1,struct poly **head2)
{
	struct poly *ptr=*head1;
	if(*head1==NULL)
		*head1=*head2;
	else{
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
		}
	ptr->next=*head2;
	}
	
}
void simplify(struct poly *head)
{
	struct poly *ptr,*ptr1,*pv;
	ptr=head;
	while(ptr!=NULL)
	{
		pv=ptr;
		ptr1=ptr->next;
		while(ptr1!=NULL)
		{
			if(ptr->exp==ptr1->exp)
			{
				ptr->coeff+=ptr1->coeff;
				pv->next=ptr1->next;
				free(ptr1);
				ptr1=pv->next;
			}
			else
			{
				pv=ptr1;
				ptr1=ptr1->next;
			}
			
		}
		ptr=ptr->next;
		
	}
}
void display(struct poly *head)
{
   struct poly *ptr=head;
   while(ptr!=NULL)
    {
       printf("(%d, %d) ",ptr->coeff,ptr->exp);
       ptr=ptr->next;
    }
}
int main()
{
	struct poly *head1=NULL;
	struct poly *head2=NULL;
	create(&head1);
	create(&head2);
//	join(&head1,&head2);
//	simplify(head1);
	display(head1);
	printf("\n");
	display(head2);
	join(&head1,&head2);
	printf("\n");
	display(head1);
	simplify(head1);
	printf("\n");
	display(head1);
	
	return 0;
}




















