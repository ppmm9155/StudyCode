#include <stdio.h>

int main (void)
{
	int a,b,c;
	
	printf("삼각형의 3변을 입력하시오 \n");
	scanf("%d\n%d\n%d",&a,&b,&c); 
	
	if((a+b)>c&&(b+c)>a&&(a+c)>b) //(a+b) > c, (b+c) > a , (a+c) >b 
	{
		printf(" 옳바른 삼각형  입니다.\n");
	}
	else
	{
		printf("옳바른 삼각형이 아닙니다.\n");
	}
	return 0;
}
