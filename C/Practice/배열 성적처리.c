#include <stdio.h>

int main (void)
{
	int kor[3],eng[3],mth[3];
	int tot, total=0;
	int howmany, n;
	//인원 입력  
	printf("몇명의 성적을 처리하도록 설정하시겠습니까? :");
	scanf("%d",&howmany);
	//점수 입력 
	for(n=1;n<=howmany;++n)
	{
		printf("%d번쨰 학생의 점수 입력:",n);
		scanf("%d %d %d",&kor[n],&eng[n],&mth[n]);		
	}
	
	printf("\n----------------------------------");
	printf("\n순번\t국어\t영어\t수학\t총점\t평균\n");
	for(n=1;n<=howmany;++n)
	{
		tot=kor[n]+eng[n]+mth[n];
		total += tot;
		printf("%d\t%d\t%d\t%d\t%d\t%5.2f\n",n,kor[n],eng[n],mth[n],tot,tot/3.0);
	}
	printf("\n----------------------------------");
	printf("\n\t반 총점: %d 반 평균: %5.2f\n",total,total/(float)(3*howmany));
	printf("\n----------------------------------");	

}
