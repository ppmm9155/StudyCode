#include <stdio.h>

int is_prime(int);
int get_integer(void);
main() //main
{
	int n,result;
	n = get_integer();
	result = is_prime(n);
	
	if(result == 1)
		printf("%d은 소수 입니다.\n",n);
	else
		printf("%d은 소수가 아닙니다.\n",n);
	return 0;	
	
}
int get_integer(void) //입력  
{
	int n;
	printf("정수를 입력하시오");
	scanf("%d",&n);
	return n;
}

int is_prime(int n)
{
	
	int divisors=0;
	int i;
	for (i=1;i<=n;i++)
	{
		if(n%i == 0)
			divisors++;
	}
	return (divisors ==2);
}


