#include<stdio.h>
void main()
{
      int c,add,sub,div,mul,mod,n1,n2;
      printf("Enter two numbers : \n");
      scanf("%d%d",&n1,&n2);
      printf("\n\n\n\n\n\n\n\n\n\n\n\n");
      printf("\t\t\t\t\t\t********************************************\n");
      printf("\t\t\t\t\t\t*              CALCULATOR                  *\n");
      printf("\t\t\t\t\t\t********************************************\n");
      printf("\t\t\t\t\t\t* 1 *  ADDITION                            *\n");
      printf("\t\t\t\t\t\t* 2 *  SUBTRACTION                         *\n");
      printf("\t\t\t\t\t\t* 3 *  MULTIPLICATION                      *\n");
      printf("\t\t\t\t\t\t* 4 *  DIVISION/QUOTIENT                   *\n");
      printf("\t\t\t\t\t\t* 5 *  REMAINDER/MODULUS                   *\n");
      printf("\t\t\t\t\t\t********************************************\n");
      printf("\t\t\t\t\t\tENTER YOUR CHOICE :  ");
      scanf("%d",&c);
      printf("\t\t\t\t\t\t");
      switch(c)
      {
            case(1):
            {
                  add=n1+n2;
                  printf("The sum of %d and %d is %d.\n",n1,n2,add);
                  break;
            }
            case(2):
            {
                  sub=n1-n2;
                  printf("The difference between %d and %d is %d.\n",n1,n2,sub);
                  break;
            }
            case(3):
            {
                  mul=n1*n2;
                  printf("The product of %d and %d is %d.\n",n1,n2,mul);
                  break;
            }
            case(4):
            {
                  if(n2!=0)
                  {
                        div=n1/n2;
                        printf("The quotient when %d is divided by %d is %d.\n",n1,n2,div);
                  }
                  else
                  {
                        printf("The value is undefined. \n");
                  }
                  break;
            }
            case(5):
            {
                  
                  if(n2!=0)
                  {
                        mod=n1%n2;
                        printf("The remainder when %d is divided by %d is %d.\n",n1,n2,mod);
                  }
                  else
                  {
                        printf("The value is undefined. \n");
                  }
                  break;
            }
            default:
            {
                  printf("\t\t\t\t\t\t");
                  printf("ERROR!!! WRONG INPUT, PLEASE TRY AGAIN.\n");
                  break;
            }
      }  
      printf("\n\n\n\n\n\n\n\n\n\n\n\n");
}
