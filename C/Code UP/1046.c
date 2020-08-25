#include <stdio.h>

int main (void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d\n",a+b+c);
	printf("%0.1f\n",(float)(a+b+c)/3);
	return 0;
}
