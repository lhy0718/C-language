#include<stdio.h>
/*void swap(int *a1, int *a2)
{
	int t;
	t=*a1;
	*a1=*a2;
	*a2=t;
}*/

/*void tri(int n,int d,char a1[100])
{
	int i;
	char b1[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	if (d<0)
	{
		while(d<0)
		{
			d=d+n;
		}
	}
	else if (d>n)
	{
		d=d%n;
	}
	for (i = 0; i < n-d; i++)
	{
		b1[d+i] = a1[i];
	}
	for (i = n-d; i < n; i++)
	{
		b1[i-n+d] = a1[i];
	}

	for (i = 0; i < n; i++)
	{
		printf("%c", b1[i]);
		printf(",");
	}

}
*/
/*void jug(int n, int d, char a2[100])
{
	int i=0,t=0,j=0,p=0,m=n;
	char b2[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	if (d<0)
	{
		while(d<0)
		{
			d=d+n;
		}
	}
	else if (d>n)
	{
		d=d%n;
	}
	while(m%d != 0)
	{
		m++;
	}
/////////////////////////////////////////
	for (j=1; j<m/d-1; j++)
	{

		b2[i+j*d]=a2[i];

	}

	for (i = 1; i<d; i++) 
	{
		for (j=1; j<m/d-2; j++)
		{

			b2[i+j*d]=a2[i];

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
//	for(i=n;  i<m; i++)
//	{
//		a[i-n]=a[i];
//		
//	}
	for (i = 0; i < n; i++)
	{
		printf("%c", a2[i]);
		printf(",");
	}
}
*/
void blo(int n, int d, char a3[100])
{
	int i, j;
	if (d<0)
	{
		while(d<0)
		{
			d=d+n;
		}
	}
	else if (d>n)
	{
		d=d%n;
	}
	if (d == 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%c", a3[i]);
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
	for (i = 0; i < n; i++)
	{
		printf("%c", a3[i]);
		printf(",");
	}
}

/*void rev(int n, int d, char a4[100])
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
		d=d%n;
	}
	int i, j;
	char b4[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	for (i = 0; i < n-d; i++)
	{
		b4[n - d - i-1] = a4[i];
	}
	for (i = n-d; i < n; i++)
	{
		b4[2*n-d-i-1] = a4[i];
	}
	for (i = 0; i < n; i++)
	{
		a4[n - i-1] = b4[i];
	}
	for (i = 0; i < n; i++)
	{
		printf("%c", a4[i]);
		printf(",");
	}
}
*/
int main()
{
	int n=-1, d, i=0;
	char a[100];

	while(n<=0)
	{
		printf("n=");
		scanf("%d",&n);
		if (n<=0)
		{
			printf("n은 0보다 큰 수입니다.\n");
		}
	}

	printf("d=");
	scanf("%d", &d);
	for (i = 0; i < n; i++)
	{
		printf("%d번째=",i);
		scanf("%s", &a[i]);
	}
	if (d==0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%c", a[i]);
			printf(",");
		}
		return 0;
	}
	printf("tri : ");
//	tri(n,d,a);
	printf("\n");
	printf("rev : ");
//	rev(n,d,a);
	printf("\n");
	printf("jug : ");
//	jug(n,d,a);
	printf("\n");
	printf("blo : ");
	blo(n,d,a);
	printf("\n--end--");
	return 0;
}
