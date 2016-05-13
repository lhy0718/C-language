#include<stdio.h>

void tri(int n,int d,char a[100])
{
	int i;
	char b[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	if (d<0)
	{
		while(d<0)
		{
			d=d+n;
		}
	}
	else if (d>n)
	{
		while(d>n)
		{
			d=d-n;
		}
	}
	for (i = 0; i < n-d; i++)
	{
		b[d+i] = a[i];
	}
	for (i = n-d; i < n; i++)
	{
		b[i-n+d] = a[i];
	}

	for (i = 0; i < n; i++)
	{
		printf("%c", b[i]);
		printf(",");
	}

}
void jug(int n, int d, char a[100])
{
	if (d<0)
	{
		while(d<0)
		{
			d=d+n;
		}
	}
	else if (d>n)
	{
		while(d>n)
		{
			d=d-n;
		}
	}
	/*for (int i = 0; i<gcd(k, n); i++) {
		t = x[i];
		j = i;
		while (true) {
			p = (j + k) % n;
			if (p == i)
				break;
			x[j] = x[p];
			j = p;
		}
		x[j] = t;
	}*/
}
void blo(int n, int d, char a[100])
{
	if (d<0)
	{
		while(d<0)
		{
			d=d+n;
		}
	}
	else if (d>n)
	{
		while(d>n)
		{
			d=d-n;
		}
	}
	/*if (k == 0 || k == n)
		return;
	i = p = k;
	j = n - k;
	while (i != j) {
//		invariant:  x[0..p-i] in final position
//		x[p-i..p-1] = a (to be swapped with b)
//		x[p..p+j-1] = b (to be swapped with a)
//		x[p+j..n-1] in final position
		if (i > j) {
			swap(p - i, p, j);
			i -= j;
		}
		else {
			swap(p - i, p + j - i, i);
			j -= i;
		}
	}
	swap(p - i, p, i);*/
}
void rev(int n, int d, char a[100])
{
	if (d<0)
	{
		while (d<0)
		{
			d = d + n;
		}
	}
	int i, j;
	char b[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	for (i = 0; i < n-d; i++)
	{
		b[n - d - i-1] = a[i];
	}
	for (i = n-d; i < n; i++)
	{
		b[2*n-d-i-1] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[n - i-1] = b[i];
	}
	for (i = 0; i < n; i++)
	{
		printf("%c", a[i]);
		printf(",");
	}
}

int main()
{
	int n, d, i=0;
	char a[100];
	printf("n=");
	scanf("%d",&n);
	printf("d=");
	scanf("%d", &d);
	for (i = 0; i < n; i++)
	{
		printf("%d¹øÂ°=",i);
		scanf("%s", &a[i]);
	}
	tri(n,d,a);
	printf("\n");
	rev(n,d,a);

	return 0;
}
