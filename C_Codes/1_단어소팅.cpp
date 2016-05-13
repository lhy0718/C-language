#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable : 4996)

char **sort(char **pp, int n)
{
	int i, j;
	char *temp;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (pp[j][0] > pp[j + 1][0])			//단어의 첫 글자 비교
			{
				temp = pp[j];
				pp[j] = pp[j + 1];
				pp[j + 1] = temp;					//사전순으로 단어 위치 바꿈
			}
		}
	}
	return pp;
}

int main()
{
	int n = 1, m = 0, i;
	char input[100];
	char **p;

	gets(input);
	for (i = 0; i < 100; i++)
	{
		if (input[i] == '\0')
			break;
		if (input[i] == ' ')
		{
			n++;									//' '로 구별되는 단어의 갯수 기록
		}
	}
	p = (char **)malloc(n*sizeof(char*));			//단어 갯수만큼 동적할당
	n = 0;
	for (i = 0; i < 100; i++)
	{
		if (input[i] == '\0')
			break;
		if (input[i] == ' ')
		{
			n++;
			m = 0;									//각각 단어의 길이 기록
		}
		else
		{
			m++;
			p[n] = (char *)malloc(m*sizeof(char));	//각각 단어 길이만큼 동적할당
		}
	}

	n = 0, m = 0;
	for (i = 0; i < 100; i++)
	{
		if (input[i] == '\0')
		{
			p[n][m] = '\0';			//단어의 끝부분에 NULL입력
			break;
		}
		if (input[i] == ' ')
		{
			p[n][m] = '\0';			//단어의 끝부분에 NULL입력
			n++;
			m = 0;
		}
		else
		{
			p[n][m] = input[i];		//이차원 배열에 문자저장
			m++;
		}
	}

	p = sort(p, n);					//소팅 함수에 이중포인터와 단어갯수 인수로 전달

	for (i = 0; i < n + 1; i++)
	{
		printf("\n%s", p[i]);		//소팅 후 결과 출력
	}

	while (true)
	{

	}
	return 0;
}
