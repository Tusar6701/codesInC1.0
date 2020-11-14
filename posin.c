#include <stdio.h>
#include <string.h>
#define MAX 1000
typedef struct{
int a[MAX];
int top;
}STACK;

int push(STACK *s, int v){
	if(s->top==MAX-1){
		printf("Overflow");
		return -1;
	}
	else{
		s->top++;
		s->a[s->top] = v;
		return 0;
	}
}

int pop(STACK *s, int *v){
	if(s->top == -1){
		printf("Underflow");
		return -1;
	}
	else{
		*v = s->a[s->top];
		s->top--;
		return 0;
	}
}

int operation(int a,int b, char op){
		switch(op){
			case '+':return a+b;
			break;
			case '-':return a-b;
			break;
			case '/':return a/b;
			break;
			case '*':return a*b;
			break;	
		}
	}

	void postfixInfix(char *s, int n){
		STACK s1;
		s1.top =-1;
		int i=0;
		int v1,v2;
		while(i<n){
			if(s[i]>='0' && s[i]<='9')
			push(&s1,(s[i]-'0'));
			else{
				pop(&s1,&v1);
				pop(&s1,&v2);
				push(&s1,operation(v2,v1,s[i]));
			}
			i++;
		}
		pop(&s1,&v1);
		printf("%d",v1);
}

main(){
	char postin[] = "29*3/3+2-";
	postfixInfix(postin,strlen(postin));
}
