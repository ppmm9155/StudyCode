#include <stdio.h>

int main (void)
{
	double width,hight,area,perimeter;
	printf("폭의 길이를 입력하시오\n");
	scanf("%lf",&width);
	printf("높이의 길이를 입력하시오\n");
	scanf("%lf",&hight);
	
	area=width*hight;
	perimeter=2*(width+hight);
	
	printf("사각형의 넓이: %lf\n",area);
	printf("사각형의 둘레: %lf\n",perimeter);
	return 0;
}
