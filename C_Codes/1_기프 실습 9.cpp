#include<stdio.h>

/*int main()
{
	int num, a, b, c, d, count=0;
	for(num=1; num<=10000; num++)
	{
		a=num/1000;
		b=(num-1000*a)/100;
		c=(num-100*b-1000*a)/10;
		d=(num-10*c-100*b-1000*a);
		if (a==8)
		count++;
		if (b==8)
		count++;
		if (c==8)
		count++;
		if (d==8)
		count++;
	}
	printf("%d", count);
	return 0;
}*/

int main()
{
	int n=0, m=0, i=0, j=0, count=0, max=0;
	scanf("%d", &i);
	scanf("%d", &j);
	for (n=i; n<=j; n++)
	{
		m=n;
		count=1;
		while(m!=1)
		{
			if (m%2==0)
			{
				m=m/2;
				count++;
			}
			else if(m%2==1)
			{
				m=3*m+1;
				count++;
			}
		}
		if (count>max)
		max=count;
	}
	printf("%d", max);
	return 0;
}
