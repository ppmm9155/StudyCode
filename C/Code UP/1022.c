#include <stdio.h>

int main (void)
{
	char data[2001]=""; // 공백이 포함된 문장 stdin  
	fgets(data,2000,stdin); //fgets( ) 를 사용하면 공백문자가 포함되어잇는 문장을 입력받아 저장할 수 있다
	printf("%s",data);
	return 0; 
}
