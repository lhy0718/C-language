#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define DATA_NUM 100000

void i_sort1(int *arr1)
{
	int temp,i,j;
	for(i=1; i<DATA_NUM; i++)
	{
		for(j=i; arr1[j]<arr1[j-1] && j>0; j--)
		{
			temp = arr1[j];
			arr1[j] = arr1[j-1];
			arr1[j-1] = temp;
		}
	}
} 

void i_sort2(int *arr2)
{
	int temp,i,j;
	for(i=1; i<DATA_NUM; i++)
	{
		temp = arr2[i];
		for(j=i; arr2[j]<arr2[j-1] && j>0; j--)
		{
			arr2[j] = arr2[j-1];
			arr2[j-1] = temp;
		}
	}
} 

int main()
{
	int *data=NULL, *data1=NULL, *data2=NULL, temp, i, j;
	time_t start=0, end=0;
	
	data = (int *)malloc(sizeof(int) * DATA_NUM);
	data1 = (int *)malloc(sizeof(int) * DATA_NUM);
	data2 = (int *)malloc(sizeof(int) * DATA_NUM);
	for(i=0; i<DATA_NUM; i++)
	{
		data[i]=rand();		//data배열에 랜덤값 대입 
	}	
	for(i=0; i<DATA_NUM; i++)
	{
		data1[i]=data[i];		//data1배열에 data배열 대입 
	}	
	for(i=0; i<DATA_NUM; i++)
	{
		data2[i]=data[i];		//data2배열에 data배열 대입 
	}


	start = clock();
	i_sort1(data1);
	end = clock();
	printf("i_sort1 : %f seconds\n", (double)(end-start)/CLOCKS_PER_SEC); 
	
	start = clock();
	i_sort2(data2);
	end = clock();
	printf("i_sort2 : %f seconds\n", (double)(end-start)/CLOCKS_PER_SEC); 

	return 0;
}
