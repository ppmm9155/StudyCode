#include <stdio.h>

int main (void)
{
	double f_temp;
	double c_temp;
	//È­¾¾¿Âµµ 
	printf("È­¾¾¿Âµµ¸¦ ÀÔ·ÂÇÏ½Ã¿À:");  
	scanf("%lf",&f_temp);
	//¼·¾¾¿Âµµ	
	c_temp = 5.0/9.0*(f_temp -32);
	//((double)5 / (double)9) * (f_temp-32);
	//5.0 / 9.0 * (f_temp -32);
	//((double)5 /9) * (f_temp -32);
	printf("¼·¾¾¿Âµµ´Â %lfÀÔ´Ï´Ù\n",c_temp); 
	
	return 0 ;
}
