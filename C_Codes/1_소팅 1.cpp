#pragma warning(disable : 4996)
#include<stdio.h>
#include <string.h>
#include<stdlib.h>

void sort(int c, float a1[])
{
	int i, j;
	float t;
	for (i = 0; i < c; i++)
	{
		for (j = c-1; j >=i; j--)
		{
			if (a1[j] < a1[j - 1])
			{
				t = a1[j];
				a1[j] = a1[j - 1];
				a1[j - 1] = t;
			}
		}
	}
	printf("\n");
	for (i = 0; i < c; i++)
	{
		printf("%.3f\t", a1[i]);
		printf(",");
	}
}

int main()
{
	float a[100];
	int i = 0, count = 0;

	int j;
	do
	{
		scanf("%f", &a[i]);
		i++;
		count++;
	}
	while (getc(stdin) == ' ');
	printf("\n입력 받음\n");
	for (j = 0; j < count; j++)
	{
		printf("%.3f\t", a[j]);
		printf(",");
	}
	printf("\n---------------");
	printf("\n결과\n");
	sort(count, a);
	printf("\n---------------");
	
	while(true)
	{
	}
}
