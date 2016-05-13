//이한용 20151322 제어문을 이용하여 다음 3가지 도형을 command line에 출력. (도형 높이는 10으로)
#include<stdio.h>

int main ()
{
	int i,j,k;
	
	printf("도형 1\n");
	for (i=0 ; i<10 ; i++)
	{
		for(k=10-i ; k>0 ; k--)
		{
			printf(" ");
		}
		for(j=0 ; j<i+1 ; j++)
		{
			printf("*");
		}
	printf("\n");
	}

	printf("\n도형 2\n");
	for (i=1 ; i<=5 ; i++)
	{
		for(j=5-i ; j>=0 ; j--)
		{
			printf(" ");
		}
		for(k=1 ; k<=2*i-1 ; k++)
		{
			printf("*");
		}
	printf("\n");
	}
	for (i=5 ; i>=1 ; i--)
	{
		for(j=5-i ; j>=0 ; j--)
		{
			printf(" ");
		}
		for(k=1 ; k<=2*i-1 ; k++)
		{
			printf("*");
		}
	printf("\n");
	}
	
	printf("\n도형 3\n");
	for (i=1 ; i<=10 ; i++)
	{
		for(j=10-i ; j>=0 ; j--)
		{
			printf(" ");
		}
		for(k=1 ; k<=2*i-1 ; k++)
		{
			printf("*");
		}
	printf("\n");
	}
	return 0;
}
