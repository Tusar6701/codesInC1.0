#include<stdio.h>

void main()

{
      
int f=0;
      
char s[100];
      
printf("Enter the string : ");
      
scanf("%[^\n]s",&s);
      
for(int i=0;s[i]!='\0';i++)
      
{
            
f++;
      
}
      
printf("Length is %d", f);

}
