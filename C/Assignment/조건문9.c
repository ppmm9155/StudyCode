#include <stdio.h>

int main(void)
{
	//입출력  
	int n;
	printf("컵사이즈를 입력하시오:"); 
	scanf("%d",&n);
	
	//if
	if(n<100) //100 미만  
	{
		printf("small\n");
	 }
	 else if((n>=100)&&(n<200)) // 100이상 200미만  
	 {
	 	printf("medium\n");
	 }
	 else if(n>=200) //200이상  
	 {
		printf("large\n");	
	 }
	 
	 
	 return 0;
	  
}
