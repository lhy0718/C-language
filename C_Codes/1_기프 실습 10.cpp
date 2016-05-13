#include<stdio.h>

int main()
{
/*	int arr[100][100], n, m, a=1, b=1, c=1, d=1, num=0, level=0, i, j;
	printf("입력값 ");
	scanf("%d", &n);
	scanf("%d", &m);
	
	while (n-3-level>=0)
	{
		for(a=level; a<m-level; a++)
		{
			arr[level][a]=num;
			num++;
		}
		for(b=level; b<n-1-level; b++)
		{
			arr[b+1][m-level-1]=num;
			num++;
		}
		for(c=n-2-level; c>=level; c--)
		{
			arr[n-level-1][c]=num;
			num++;
		}
		for(d=n-3-level; d>=level; d--)
		{
			arr[d+1][level]=num;
			num++;
		}
		level++;
	}
	for(i=0; i<10; i++)
	{
		for (j=0; j<10; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}*/
	int n, a, arr[100000000], brr[10], i=0, j, m=1000000000, in, count, count1;
	
	for (n=0; n<2100000000; n++)
	{
		count=1;
		count1=0;
		while(m>0)
		{
			for (j=0; j<9; j++)
			{
				if (n/m!=0)
				{
					brr[j]=n-brr[j-1]-n/m;
					count++;
				}
				m=m/10;
			}
		}
		for (j=0; j<count; j++)
		{
			if(brr[j]==brr[count-j])
			count1++;
		}
		if (count-1==count1)
		arr[i]=n;
		i++;
	}
	printf("n 입력 : ");
	scanf("%d", &a);
	printf("%d", arr[a]);
	return 0;
}
