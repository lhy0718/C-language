#include <stdio.h>
#include <time.h>

int main()
{
	clock_t starttime = clock();
	clock_t endtime;
	
	
/*	FILE *fp;
	fp = fopen ("", "r");
	fscanf(fp, );
*/	
	
	int i, j, k;
	for (i=0; i<1000000000; i++)
	{
		j++;
	}
	endtime = clock();
	printf("���α׷� ���� �ð� :: %d msec\n", endtime - starttime);
	return 0;	
}
