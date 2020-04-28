#include <stdio.h> 

int main (void)
{
	int year;
	
	printf("연도를 입력하시오:");
	scanf("%d",&year);
	
	//윤년 계산 
	//4로 나누어떨어지면 윤년 , 100으로 나누어떨어지면 평년, 400으로 나누어떨어지면 윤년  
	if((year%4==0 && year%100!=0) ||year%400==0) //(4로 나누어떨어진 경우, 100으로 떨어지지않은  경우) || (400으로 나누어 떨어진 경우)   
		printf("%d년은 윤년입니다.\n",year);
	else
		printf("%d년은 윤년이 아닙니다.\n",year);
		
	return 0;		
}
