#include <stdio.h> 

int main (void)
{
	int i,sum;
	i=1;
	sum=0;
	
	while(i<=100)  // i는 100될떄까지 101번 반복 
	{
		sum += i; // sum= sum+i, 0=0+1,1=1+2 ...4950=4950+100    
		i++;
	}
	
	printf("1부터 100까지의 합은 %d 입니다.",sum);
	return 0;
}
