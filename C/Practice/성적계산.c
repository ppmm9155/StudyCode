#include <stdio.h>

int main (void)
{
	int grade,n;
	float sum, average;
	
	n=0;
	sum=0;
	grade=0;
	
	printf("성적 입력을 종료 하려면 음수를 입력하시오\n");
	printf("_________________________________________\n");
	
	while(grade>=0) //0이상일떄 실행 
	{
		printf("성적을 입력하시오");
		scanf("%d",&grade);
		
		sum+=grade; // 성적 합  
		n++; //나누는값  
	 } 
	 
	 sum=sum-grade; //합계 조정  
	 n--; //성적개수값 조정  
	 average=sum/n; // 평균=합계/성적개수  
	 
	 printf("성적의 평균은 %f 입니다.\n",average);
	 
	 return 0;
	 
}
