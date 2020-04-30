#include <stdio.h>

int main (void)
{
	
	int n;
	int i=1;
	//입력 
	printf("구구단 출력하고싶은 단을 입력하시오:");
	scanf("%d",&n);

	while(i<=9)	//i는 9이하 
	{ 
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
	return 0; 
}
