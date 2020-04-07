#include <stdio.h>

int main (void)
{
	double light_speed = 300000; //빛의 속도  
	double distance = 149600000; //태양과 지구 사이 거리 
	
	double time;
	time = distance/light_speed; //거리 빛의속도로 나눔
	
	printf("빛의 속도는 %lfkm \n",light_speed);
	printf("태양과 지구 사이 거리는 %lf \n",distance);
	printf("도달시간은 %lf초\n",time);
	double m=((time/60)-0.311111);
	double s=0.311111*60;
	printf("%lf분%lf초\n",m,s);
	  
	int a,b; //정수  
	
	a=((498/60)%60);
	b=(498%60);
	printf("%d분",a);
	printf("%d초",b);
	return 0; 
}
