#include<stdio.h>
#include<stdlib.h>

int main()
{
	double byteNum = 0, block = 1024;
	int count = 0;
	void *p = NULL;
	while (block >= 8)
	{
		while (p = (void *)malloc(block))
		{
			count++;
			byteNum += block;
		}
		printf("%.0lf byte  \t: %d°³\n", block, count);
		block /= 2;
		count = 0;
	}
	printf("-----------------------------\n");
	printf("total : %.0lf byte", byteNum);
	printf("\n-end-");
	while (true)
	{

	}
	return 0;
}
