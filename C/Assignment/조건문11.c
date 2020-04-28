#include <stdio.h>
#include <math.h>

int main (void)
{
	//입력  
	double a,b,c,dis;
	
	printf("계수 a를 입력하시오:"); 
	scanf("%lf",&a); //a 
	
	
	printf("계수 b를 입력하시오:");
	scanf("%lf",&b); //b
	
	
	printf("계수 c를 입력하시오:");
	scanf("%lf",&c); //c
	//
	
	if(a==0)  //값이 0일떄  중근  
	{
		printf("방정식의 근은 %f 입니다.",-c/b); //-c/b 중근   
	}
	else
	{
		dis=(b*b-4.0*a*c);
		if(dis >=0)
		{
			printf("방정식의 근은 %f입니다.\n",(-b+sqrt(dis))/(2.0*a)); //0보다 클떄 실근  
			printf("방정식의 근은 %f입니다.\n",(-b-sqrt(dis))/(2.0*a)); // 0보다 작을떄  허근  
		}
		else
			printf("실근이 존재하지 않습니다.");
	}
	
	return 0; 
	
	
}
