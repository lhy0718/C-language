#include<stdio.h>

int linearSearch(int arr[], int num);
int binarySearch_loop(int arr[], int num);
int binarySearch_RF(int arr[], int num, int a, int b);

int main()
{
	int arr[]={3, 13, 22, 23, 25, 67, 85, 88, 123, 199, 303, 567, 656, 891, 1909};
	int num;
	while(1)
	{
		int a=0, b=14;
		printf("\n배열에서 찾고자 하는 수 입력 : ");
		scanf("%d", &num); 
		printf("%d", binarySearch_RF(arr, num, a, b));
	}
	return 0;
}

int linearSearch(int arr[], int num)
{
	int i, returnValue=-1;

	for (i=0; i<15; i++)
	{
		if (num==arr[i])
		returnValue=i+1;
	}
	return returnValue;
}

int binarySearch_loop(int arr[], int num)
{
	int i, returnValue=-1, count=0, m;
	for (i=0; i<15; i++)
	{
		if (num==arr[i])
		{
			count++;
		}
	}
	if(count!=1)
	return returnValue;
	else
	{
		i=8;
		m=7;
		while (num!=arr[m])
		{
			if (num<arr[m])
			{
				m=m-i/2;
				i=i/2;
			}
			else if (num>arr[m])
			{
				m=m+i/2;
				i=i/2+1;
			}
		}
		returnValue=m;
		return returnValue;
	}
}

int binarySearch_RF(int arr[], int num, int a, int b)
{
	if(num>arr[(b-a)/2])
	{
		binarySearch_RF(arr, num, a-(b-a)/2, b);
	}
	else if(num<arr[(b-a)/2])
	{
		binarySearch_RF(arr, num, a, b+(b-a)/2);
	}
	else
	return (b-a)/2;//보류ㅠㅠ 
}
