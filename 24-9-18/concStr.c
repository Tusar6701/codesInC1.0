#include<stdio.h>

#include<string.h>

void main()

{
      
int i,j;
      
char s[100],s1[100],s2[100];
      
printf("Enter 1st string : ");
      
scanf("%[^\n]s",&s1);
      
gets();
      
printf("Enter 2nd string : ");
      
scanf("%[^\n]s",&s2);
      
gets();
      
for(i=0;s1[i]!='\0';i++);
      
for(j=0;s2[j]!='\0';j++)
      
{
            
s1[i]=s2[j];
            
i++;
      }
      
printf("Concatenated string : ");     
      
puts(s);
 
}
