#include<stdio.h>
#include<string.h>
void main()
{
      int n;
      int v=0,c=0;
      printf("Enter a sentence : ");
      char s[100];
      scanf("%[^\n]s",&s);
      int l= strlen(s);
      printf("%d",l);
      for(int i=0;s[i]!='\0';i++)
      {
            
            if(isalpha(s[i]))
            {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                  v+=1;
            }
            else
            {
                  c+=1;
            }
            }
      }
      printf(" VOWELS: %d",v);
      printf(" CONSONANTS: %d",c);
}
      
