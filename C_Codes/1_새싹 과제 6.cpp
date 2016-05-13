#include<stdio.h>

/*
int fibo(int i)
{
	if(i==0||i==1)
	return 1;
	else
	return fibo(i-1)+fibo(i-2);
}

int main()
{
	printf("1번과제");
	int a[30],i;
	for(i=0; i<30; i++)
	{
		a[i]=fibo(i);
		printf("%d\n", a[i]);
	}
	return 0;
}
*/
/*
int max(int n, int a[])
{
	int i, maxNum=-2100000000;
	for(i=0; i<n; i++)
	{
		if(a[i]>maxNum)
		maxNum=a[i];
	}
	return maxNum;
} 

int main()
{
	printf("2번과제\n");
	
	int n;	
	printf("배열의 길이입력 : ");
	scanf("%d", &n);
	printf("\n");
	printf("배열 입력\n");
	int a[n],i;
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n");

	printf("가장 큰 수 : %d", max(n, a));
	
	return 0;
}
*/
