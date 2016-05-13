#include<stdio.h>
#pragma warning(disable : 4996)

typedef struct
{
	int id;
	char name[10];
	int score1;
	int score2;
	int score3;
	float scoreAvg;
} ST;

ST *sort(ST arr[3])
{
	int i, j;
	ST t;
	for (i = 0; i < 2; i++)
	{
		for (j = 2; j > i; j--)
		{
			if (arr[j].scoreAvg > arr[j - 1].scoreAvg)
			{
				t = arr[j];
				arr[j] = arr[j - 1];										// 평균순으로 순서바꿈
				arr[j - 1] = t;
			}
		}
	}
	return arr;
}

int main()
{
	int i;
	ST s[3];
	ST *p;


	for (i = 0; i < 3; i++)
	{
		printf("\nInsert information of %d student : ", i + 1);
		printf("\nstudent NO. : ");
		scanf("%d", &s[i].id);
		printf("name : ");
		scanf("%s", s[i].name);
		printf("first course score : ");
		scanf("%d", &s[i].score1);
		printf("second course score : ");
		scanf("%d", &s[i].score2);
		printf("third course score : ");
		scanf("%d", &s[i].score3);																//학생정보 입력
		s[i].scoreAvg = (float)(s[i].score1 + s[i].score2 + s[i].score3) / 3;		//평균계산
	}
	p = s;
	p = sort(p);
	printf("\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=");
	printf("\nstudent NO.\tname\tscore1\tscore2\tscore3\tscoreAverage");
	for (i = 0; i < 3; i++)
	{
		printf("\n%d\t\t%s\t%d\t%d\t%d\t%f", p[i].id, p[i].name, p[i].score1, p[i].score2, p[i].score3, p[i].scoreAvg); // 정보출력
	}
	while (true)
	{

	}
	return 0;
}