#include <stdio.h> 

int main (void)
{
	int fruit;
	printf("정수를 입력하시오: ");
	scanf("%d",&fruit);
	
	switch(fruit){
		case 1:
			printf("사과\n");
			break ;
		case 2:
			printf("배\n");
			break ;
		case 3:
			printf("배나나\n");
			break;
		default:
			printf("과일\n");
			break;	
	}
	return 0; 
}
