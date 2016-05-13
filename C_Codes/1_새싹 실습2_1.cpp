# include<stdio.h>

int main()
{
	int a[5], b[5], i, j, t, max;
	for (i=0; i<5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf ("\n");
	printf("%d, %d, %d, %d, %d", a[0], a[1], a[2], a[3], a[4]);
	for (j=0; j<5; j++)
	{
		max=-2100000000;
		t=0;
		for (i=0; i<5; i++)
		{
			if(a[i]>max)
			{
				max=a[i];
				t=i;
			}
		}
		b[j]=a[t];
		a[t]=0;
	}
	printf("\n\n");
	printf("%d, %d, %d, %d, %d", a[0], a[1], a[2], a[3], a[4]);
	printf("\n");
	printf("%d, %d, %d, %d, %d", b[0], b[1], b[2], b[3], b[4]);
	return 0; 
}
