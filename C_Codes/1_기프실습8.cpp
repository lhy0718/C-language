#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define randomize() srand((unsigned)time(NULL))
#define random(n) (rand()%(n))

void a(int z, int x, int c)
{

	printf("\n�� : %d, �� : %d, ���º� : %d", z, x, c);
}

int main()
{
	
	randomize();
	int player, com;
	int pScore=0, cScore=0, count, m=0;

	printf("*************************\n���� : 0\n���� : 1\n�� : 2\n*************************\n");
	
	for (count=1; count<=5; count++)
	{
		printf("\n%dȸ\n", count);
		printf("����, ����, �� �� �ϳ� �Է� : ");
		scanf("%d", &player);
		com=rand()%3;
		if (player==com)
		{
			printf("���");
			m++;
		}
		else if(player-com==1||player-com==-2)
		{
			printf("��");
			pScore++;
		}
		else if(player-com==-1||player-com==2)
		{
			printf("��");
			cScore++;
		}
		if (count<5&&(pScore==3||cScore==3))
		a(pScore, cScore, m);
	}
		a(pScore, cScore, m);
	
	return 0;
}
