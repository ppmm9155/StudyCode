#include <stdio.h>

int main (void)
{
	char op;
	int x,y,result;
	
	printf("수식을 입력하시오:\n");
	printf("(예2+5)\n"); 
	printf(">>");
	
	scanf("%d %c %d",&x,&op,&y) ;
	
	switch(op)
	{
		case '+':
		{
			result=x+y;
			break;
		}
		case '-':
		{
			result=x-y;
			break;
		}
		case '*':
		{
			result=x*y;
			break;
		}
		case '%':
		{
			result=x%y;
			break;
		}
		default:
			printf("지원 되지않는 연산자입니다.");
			break;
					
	}
	printf("%d %c %d = %d",x,op,y,result);
	return 0;
	
}
