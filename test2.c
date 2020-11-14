#include<stdio.h> 
#include<stdlib.h> 
   
/* Link list node */
struct Node 
{ 
    int data; 
    struct Node* next; 
}; 
   

//Rotation function 
void rotate(struct Node **h, int s1, int e1, int r1)
{
	//printf("HIIIIII");
	struct Node *ptr,*ptr1,*p,*p1;
	ptr=ptr1=*h;
	for(int i=0;i<s1;i++)
	{
		ptr=ptr->next;
	}
	for(int i=0;i<=e1;i++)
	{
		p=ptr1;
		ptr1=ptr1->next;
	}
	
	if(r1>0)//clockwise rotation
	{
		for(int i=0;i<r1;i++)
		{
			p->next=ptr1->next;
			ptr1->next=ptr->next;
			ptr->next=ptr1;
			ptr1=p;
		}
		
			
	}
	else//anticlockwise
	{
		int k=r1*(-1);
		
		if(s1==0)
		{
			for(int i=0;i<k;i++){
			p->next=ptr1->next;
			ptr1->next=(*h)->next;
			(*h)->next=ptr1;
			ptr1=p;
		}
		}
		else{p1=ptr->next;
		for(int i=0;i<k;i++)
		{
			ptr->next=p1->next;
			p1->next=ptr1->next;
			ptr1->next=p1;
			p1=ptr->next;
		}}
		
		
	}	
}

void display(struct Node *h)
{
	printf("\n");
	struct Node *ptr;
	for(ptr=h;ptr!=NULL;ptr=ptr->next)
	{
		printf("%d ",ptr->data);
	}
	printf("\n");
}
			
	
void create(struct Node **h)
{
	struct Node *cur,*ptr=*h;
	
	for(int i=0;i<10;i++)
	{
		cur=(struct Node *)malloc(sizeof(struct Node));
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
	

int main() 
{ 
	int s, e, r;
    // Let us create linked list 0->1->2->3->4->5->6->7 
    struct Node* head = NULL;
    
    create(&head);
    display(head);
    printf("\n");
    
    
    printf("Enter the value of s,e and rotation number respectively : ");
    scanf("%d",&s);
    scanf("%d",&e);
    scanf("%d",&r);
   
    
    
    //printf("Hi");
    rotate(&head,s,e,r);
    
    //display(head);
    struct Node *ptr;
    ptr=head;
	for(int i=0;i<10;i++)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
    return 0; 
} 
