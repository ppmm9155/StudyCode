#include <stdio.h> 

int main (void)
{
	int number;
	
	printf("정수를 입력하시오");
	scanf("%d",&number); //입력  
	
	if(number <0) // number <0 음수이면실행     
		number = -number; //  x = -x 
	
	printf("절대값은 %d 입니다.\n",number); 
	
	return 0;	
}
