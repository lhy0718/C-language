#include<stdio.h>
#pragma warning(disable : 4996)
void swap(int *a1, int *a2)
{
	int t;
	t = *a1;
	*a1 = *a2;
	*a2 = t;
}

/*void tri(int n, int d, char a[100])
{
	int i;
	char b[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	if (d<0)
	{
		while (d<0)
		{
			d = d + n;
		}
	}
	else if (d>n)
	{
		while (d>n)
		{
			d = d - n;
		}
	}
	for (i = 0; i < n - d; i++)
	{
		b[d + i] = a[i];
	}
	for (i = n - d; i < n; i++)
	{
		b[i - n + d] = a[i];
	}

	printf("%s", b);

}
*/
void jug(int n, int d, char a[100])
{
	int i, j, p = 0, m = n;
	char t;
//	char b[] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

	if (d<0)
	{
		while (d<0)
		{
			d = d + n;
		}
	}
	else if (d>n)
	{
		while (d>n)
		{
			d = d - n;
		}
	}
	while (m%d != 0)
	{
		m++;
	}
	for (i = n; i < m; i++)
	{
		a[i] = ' ';
	}
	a[m] = '\0';
	/////////////////////////////////////////
/*	for (j = 1; j<m / d - 1; j++)
	{
		b[i + j*d] = a[i];
	}

	for (i = 1; i<d; i++)
	{
		for (j = 1; j<m / d - 2; j++)
		{
			b[i + j*d] = a[i];
		}

		//		t = a[i];
		//		j = i;
		//		while (true) {
		//			p = (j + d) % n;
		//			if (p == i)
		//				break;
		//			a[j] = a[p];
		//			j = p;
		//		}
		//		a[j] = t;
	}
	for(i=n;  i<m; i++)
	{
		a[i-n]=a[i];
	}
*/
	for (i = 0; i <d; i++)
	{
		for (j = 0; j < m/d; j++)
		{
			t = a[i + d*j];
			a[i + d*j] = a[i];
			a[i] = t;
		}
	}

	printf("%d",m/d);
	printf("%s", a);
}

/*void blo(int n, int d, char a[100])
{
	int i, j;
	if (d<0)
	{
		while (d<0)
		{
			d = d + n;
		}
	}
	else if (d>n)
	{
		while (d>n)
		{
			d = d - n;
		}
	}
	if (d == 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%c", a[i]);
			printf(",");
		}
		return;
	}
	//	while (i != j) {
	//		invariant:  x[0..p-i] in final position
	//		x[p-i..p-1] = a (to be swapped with b)
	//		x[p..p+j-1] = b (to be swapped with a)
	//		x[p+j..n-1] in final position
	//		if (i > j) {
	//			swap(p - i, p, j);
	//			i -= j;
	//		}
	//		else {
	//			swap(p - i, p + j - i, i);
	//			j -= i;
	//		}
	//	}
	//	swap(p - i, p, i);

		printf("%s", a);
}
*/
/*void rev(int n, int d, char a[100])
{
	if (d<0)
	{
		while (d<0)
		{
			d = d + n;
		}
	}
	int i, j;
	char b[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	for (i = 0; i < n - d; i++)
	{
		b[n - d - i - 1] = a[i];
	}
	for (i = n - d; i < n; i++)
	{
		b[2 * n - d - i - 1] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[n - i - 1] = b[i];
	}

		printf("%s", a);
}
*/
int main()
{
	int n = -1, d, i = 0;
	char a[100];

	while (n <= 0)
	{
		printf("n=");
		scanf("%d", &n);
		if (n <= 0)
		{
			printf("n은 0보다 큰 수입니다.\n");
		}
	}

	printf("d=");
	scanf("%d", &d);
	for (i = 0; i < n; i++)
	{
		printf("%d번째=", i);
		scanf("%s", &a[i]);
	}
	if (d == 0)
	{
			printf("%s", a);
	}
	printf("tri : ");
//	tri(n, d, a);
	printf("\n");
	printf("rev : ");
//	rev(n, d, a);
	printf("\n");
	printf("jug : ");
	jug(n, d, a);
	printf("\n");
	printf("blo : ");
//	blo(n, d, a);
	printf("\n--end--");
	while (true)
	{

	}
	return 0;
}
