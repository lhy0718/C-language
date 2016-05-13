#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable : 4996)
void sort()
{

}

int main()
{
	int n = 1, m = 0, i, j;
	char input[100];
	char **p;

	gets(input);
	for (i = 0; i < 100; i++)
	{
		if (input[i] == '\0')
			break;
		if (input[i] == ' ')
		{
			n++;
		}
	}
	p = (char **)malloc(sizeof(char*) * n);

	for (i = 0; i < 100; i++)
	{
		if (input[i] == '\0')
			break;
		if (input[i] == ' ')
		{
			n++;
			m = 0;
		}
		else
		{
			m++;
			p[n] = (char *)malloc(sizeof(char) * m);
		}
	}
	printf("\n-2-%d,%d", n, m);

	n = 0, m = 0;
	for (i = 0; i < 100; i++)
	{
		if (input[i] == '\0')
			break;
		if (input[i] == ' ')
		{
			n++;
			m = 0;
		}
		else
		{
			p[n][m] = input[i];
			m++;
		}
	}

	printf("\n-3-%d,%d", n, m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%s,", p[i][j]);
		}
	}
	printf("\n-4-");

	while (true)
	{

	}
	return 0;
}
