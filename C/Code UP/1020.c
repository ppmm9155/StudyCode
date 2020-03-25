#include <stdio.h>

int main (void)
{
	int y,m,d;
	scanf("%d-%d",&y,&m,&d);
	printf("%06d-%07d",y,m,d);
	return 0;
}
