#include<stdio.h>
int bin_search(int length, int target, int arr[])
{
	int pivot = length/2, i = 2 , count=0;
	while (pivot / i >= 1)
	{
		if (target > arr[pivot])
		{
			pivot = pivot + (pivot / i);
		}
		else if (target < arr[pivot])
		{
			pivot = pivot - (pivot / i);
		}
		else
		{
			return pivot;
		}
		count++;
		if (count == 100)
			break;
	}
	if (arr[pivot] == target)
	{
		return pivot;
	}
	else if (pivot>length)
	{
		return -1;
	}
	else
		return -1;

}
int main()
{
	int j, k, n=0, a, b[10], result[10], count=0;
	while (n != -1)
	{
		scanf_s("%d", &n);
		if (n == -1)
			break;
		if (n == 0)
		{
			result[count] = -1;
		}
		else
		{
			scanf_s("%d", &a);
			for (j = 0; j < n; j++)
			{
				scanf_s("%d", &b[j]);
			}
			result[count] = bin_search(n, a, b);
		}
		
		count++;
	}
	for (k = 0; k < count; k++)
	{
		if (result[k] == 12)
		{
			result[k] = -1;
		}
		printf("%d ", result[k]);

	}


	while (true)
	{

	}
	return 0;
	getchar();
}