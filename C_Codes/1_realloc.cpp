#include<stdio.h>
#include<stdlib.h>

int main()
{
	double byteNum = 0, block = 1024, i;
	bool overflow = false;
	void *p = NULL;

	while (p = (void *)realloc(p, byteNum))
	{
		byteNum += block;
		printf("+ %.0lf byte,             \t %.0lf byte\n", block, byteNum);
		block *= 2;
	}
	block /= 2;
	byteNum -= block;
	while (block > 8)
	{
		byteNum += block;
		if(p = (void *)realloc(p, byteNum))
		{
			printf("+ %.0lf byte,              \t %.0lf byte\n", block, byteNum);
			overflow = false;
		}
		else
		{
			if(overflow == false)
				byteNum -= block;
			overflow = true;
			block /= 2;
		}
	}
	
	printf("--------------------------------\n");
	printf("total : %.0lf byte", byteNum);
	printf("\n-end-");

	while (true)
	{

	}
	return 0;
}
