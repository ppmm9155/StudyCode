#include <stdio.h>

int main (void)
{
	int i=0; 
	char data[30]="";
	scanf("%s",data);
	for(i=0;data[i]!='\0';i++) 
	{
		printf("\'%c\'\n",data[i]);
}
	return 0;
}
