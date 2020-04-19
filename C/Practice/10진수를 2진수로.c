#include <stdio.h>

int main (void)
{
	int a,b,c,d,e;
	b=2;
	int i;
	printf("10진수를 입력하시오\n");
	scanf("%d",&a);
	for(i=0;i<5;i++) {
		c=a/b;
		//scanf("%d",&a);
		//printf("%d",c);
		d=c%b;
		printf("%d",d); //1
		
			
}

	return 0;
	
	
}
