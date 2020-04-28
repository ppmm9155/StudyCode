#include <stdio.h> 

int main (void)
{	
	//입력  
	int n;
	printf("정수를 입력하시오:");
	scanf("%d",&n);
	
	// if
	if(n>=100) // n>=100 
	{
		printf("large\n",n);
	 } 
	else
	{
		printf("small\n",n);
	 } 
	 
	return 0; 
	
	
	
}
