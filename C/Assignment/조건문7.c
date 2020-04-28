#include <stdio.h>

int main (void)
{
	int score;
	//입력 
	printf("성적을 입력하시오:");
	scanf("%d",&score);
	
	//if
	if(score >=90)
	{
		printf("합격:학점A\n");
	}else if (score >=80)
	{
		printf("학격:학점B\n");
	 }else if (score >=70)
	 {
	 	printf("합격:학점C\n");	
	 }else if (score>=60)
	 {
	 	printf("합격:학점D\n");
	 }
	 else 
	 {
	 	printf("불합격:학점F\n");
	 }
	 
	 return 0;
	
	
}
