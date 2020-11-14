#include <stdio.h> 
unsigned int LitToBigEndian(unsigned int x);
int main() 
{ 
unsigned int i = 1805242; 
char *c = (char*) &i; 
if (*c)	 
	printf("It is in Little endian"); 
else
	printf("Big endian"); 
getchar(); 
printf("\n Little_Endian = 0x%X\n",i);
printf("\n Big_Endian    = 0x%X\n",LitToBigEndian(i));
return 0; 
}
unsigned int LitToBigEndian(unsigned int x)
{
	return (((x>>24) & 0x000000ff) | ((x>>8) & 0x0000ff00) | ((x<<8) & 0x00ff0000) | ((x<<24) & 0xff000000));
}