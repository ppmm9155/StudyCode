#include <stdio.h>

int main (void)
{
	//입력  
	int x,y;
	
	printf("수식을 입력하시오\n");
	
	//if
	if(scanf("%d+%d",&x,&y))
	{
		printf(">>>%d+%d=%d",x,y,x+y);	
	}
	else if(scanf("%d/%d",&x,&y))
	{
		printf(">>>%d/%d=%d",x,y,x/y);
	}
	else if(scanf("%d*%d",&x,&y))
	{
			printf(">>>%d*%d=%d",x,y,x*y);
	}
	else if(scanf("%d%%%d",&x,&y))
	{
		printf(">>>%d%%%d=%d",x,y,x%y);
	}
	
	return 0;
	
	
}
