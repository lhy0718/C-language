#include<stdio.h>

int main()
{
	int arr[5][5], i, j, a, b, c, d, level=0, num=1;
	
	while (level<3)
	{
		for (a=0; a<5-2*level; a++)
		{
			arr[level][a+level]=num;
			num++;
		}
		for (b=0; b<5-2*level-1; b++)
		{
			arr[1+b+level][4-level]=num;
			num++;
		}
		for (c=0; c<5-2*level-1; c++)
		{
			arr[4-level][4-level-1-c]=num;
			num++;
		}
		for (d=0; d<5-2*level-2; d++)
		{
			arr[4-level-1-d][level]=num;
			num++;
		}
		level++;
	}
	
	for (i=0; i<5; i++)
	{
		for (j=0; j<5; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
