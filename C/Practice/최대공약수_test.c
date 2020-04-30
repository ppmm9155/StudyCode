#include <stdio.h> 

int main (void)
{
	int a,b,c;
	a=12;
	b=8;
	c= a%b; //c=4
	a=b; // 12 = 8 따라서 a=8 
	b=c; // 8=4 따라서 b=4  
	printf("%d",a);
	printf("%d",b);
	printf("%d",c);
	
	return 0;
}
