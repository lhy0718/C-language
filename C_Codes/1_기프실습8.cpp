#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define randomize() srand((unsigned)time(NULL))
#define random(n) (rand()%(n))

void a(int z, int x, int c)
{

	printf("\n승 : %d, 패 : %d, 무승부 : %d", z, x, c);
}

int main()
{
	
	randomize();
	int player, com;
	int pScore=0, cScore=0, count, m=0;

	printf("*************************\n가위 : 0\n바위 : 1\n보 : 2\n*************************\n");
	
	for (count=1; count<=5; count++)
	{
		printf("\n%d회\n", count);
		printf("가위, 바위, 보 중 하나 입력 : ");
		scanf("%d", &player);
		com=rand()%3;
		if (player==com)
		{
			printf("비김");
			m++;
		}
		else if(player-com==1||player-com==-2)
		{
			printf("승");
			pScore++;
		}
		else if(player-com==-1||player-com==2)
		{
			printf("패");
			cScore++;
		}
		if (count<5&&(pScore==3||cScore==3))
		a(pScore, cScore, m);
	}
		a(pScore, cScore, m);
	
	return 0;
}
