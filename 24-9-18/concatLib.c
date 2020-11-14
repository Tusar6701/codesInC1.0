#include<stdio.h>
#include<string.h>
void main()
{
      char s[100],s1[100],s2[100];
      printf("Enter 1st string : ");
      scanf("%[^\n]s",&s1);
      gets();
      printf("Enter 2nd string : ");
      scanf("%[^\n]s",&s2);
      gets();
      int l=strlen(s1);
      int m=strlen(s2);
      for(int i=0;i<l;i++)
      {
            s[i]=s1[i];
      }int k=0;
      for(int i=l;i<l+m;i++)
      {
            s[i]=s2[k];
            k++;
      }
       
      puts(s);
}
