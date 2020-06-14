#include <stdio.h>
#define SIZE 10

int main (void)
{
	char ans1;
	int ans2;
	int ans3;
	int i;
	int seats[SIZE]={0};
	
	while(1)
	{
		printf("좌석을 예약하시겠습니까?(Y or N)");
		scanf("%c",&ans1);
		
		if(ans1=='y')
		{
			printf("------------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("------------------------\n");
			for(i=0;i<SIZE;i++)
				printf("%d",seats[i]);
			printf("\n");
			printf("몇번째 좌석을 예약하시겠습니까?");
			scanf("%d,%d",ans2,ans3); //사람2인 예약  
			//사람1 
			if(ans2<=0||ans2>SIZE)
			{
				printf("1부터 10사이의 숫자를 입력하시오\n");
				continue;
			}
			if(seats[ans2-1]==0) // 예약 되지 않았스면  
			{
				seats[ans2-1]=1;
				printf("예약되었습니다.\n");
			
			}
			else //이미 예약 됬으면  
				printf("이미 예약된 자리입니다.\n");
			//사람2	
			if(ans3<=0||ans3>SIZE)
			{
				printf("1부터 10사이의 숫자를 입력하시오\n");
				continue;
			}
			if(seats[ans3-1]==0) // 예약 되지 않았스면  
			{
				seats[ans3-1]=1;
				printf("예약되었습니다.\n");
			}
			else //이미 예약 됬으면  
				printf("이미 예약된 자리입니다.\n");
		 } 
		 else if(ans1=='n')
		 	return 0;
		
	}
	return 0;
	
}
