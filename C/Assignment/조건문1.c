#include <stdio.h>

int main (void)
{
	int number; //변수 선언  
	
	printf("정수를 입력하시오:"); //출력  
	scanf("%d",&number); // 입력  
	// if문  
	if(number>0) // if number >0, 0보다크면 양수  
		printf("양수입니다.\n");  // 참일경우 양수입니다.  
		
	//	
	printf("입력된 값은 %d 입니다.",number); //출력 입력된 값은 number 입니다.  
	//
	return 0;	
}
