#include <stdio.h>

int main (void)
{
	int y,m;
	scanf("%d-%d",&y,&m);
	printf("%06d%07d",y,m);
	return 0;
}
