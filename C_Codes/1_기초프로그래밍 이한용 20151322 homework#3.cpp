//���ѿ� 20151322 ����� �̿��Ͽ� ���� 3���� ������ command line�� ���. (���� ���̴� 10����)
#include<stdio.h>

int main ()
{
	int i,j,k;
	
	printf("���� 1\n");
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

	printf("\n���� 2\n");
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
	
	printf("\n���� 3\n");
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
