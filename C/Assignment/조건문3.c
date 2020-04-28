#include <stdio.h> 

int main(void)
{
	int number;
	printf("정수를 입력하시오"); //출력  
	scanf("%d",&number); // 정수입력  
	
	if(number%2==0) //2로나눈 나머지값이 0인가?   
		printf("입력된 정수는 짝수입니다.\n"); //0일경우 짝수  
	else
		printf("입력된 정수는 홀수입니다.\n"); // 0이 아닐 경우 홀수  
		
	return 0;		
}
