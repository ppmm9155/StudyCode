#include <stdio.h> 

int main (void)
{
	//변수 
	int x,y,r;
	
	//입력 
	printf("두개의 정수를 입력하시오(큰수,작은수)");
	scanf("%d %d",&x,&y);
	
	//
	while(y!=0) // y=아닐떄 실행 , y=0이되면 종료  
	{
		r= x % y; // 
		x=y; // 
		y=r; // 
	}
	
	printf("최대 공약수는 %d 입니다.\n.",x);
	
	return 0;
	
}
