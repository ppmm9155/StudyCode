#include <stdio.h>

int main (void) 
{
	int n1,n2,n3;
	//입력  
	printf("분자를 입력하시오:");
	scanf("%d",&n1);
	printf("분모를 입력하시오:");
	scanf("%d",&n2);
	
	//if문 
	if(n1==0) // 분자가 0인 경우  
	{
		printf("0으로 나눌수 없습니다.\n");  
	}
	else
	{
		n3=n2/n1; // 분자가 0이 아닌경우 , ex) n3=n2/0   
		printf("결과는 %d 입니다.\n",n3);
		
	}
	return 0;
	
	 
}
