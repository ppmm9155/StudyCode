#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    printf("[%d]\n", a/10000 *10000);
    printf("[%d]\n", ((a%10000)/1000)*1000);
    printf("[%d]\n", ((a%1000)/100)*100);
    printf("[%d]\n", ((a%100)/10)*10);
    printf("[%d]\n", ((a%10)/1)*1);

return 0;
}
