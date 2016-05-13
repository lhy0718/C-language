//이한용 20151322 사용자로부터 정수 N(1<=N<=1,000,000)을 입력, 그숫자를 2, 8, 16 진수로 각각 변환하여 출력하는 프로그램
#include<stdio.h>

int main()
{
	int a=0, b, c, d, count=0, i, j;
	
	while(a<1||a>1000000)
	{
		printf("정수N(1~1,000,000)을 입력하세요 : ");
		scanf("%d", &a);
	}
	
	b=a;
	c=a;
	d=a;
	
	printf("\n2진수 ->");	
	while(b>0)
		{
			b=b/2;
			count++;
		}

	for (i=count-1;i>=0;i--)
	{
		b=a;
		for(j=i;j>0;j--)
		{
			b=b/2;
		}
		printf("%d", b%2);
	}

	printf("\n8진수 ->");
	count=0;
	while(c>0)
		{
			c=c/8;
			count++;
		}

	for (i=count-1;i>=0;i--)
	{
		c=a;
		for(j=i;j>0;j--)
		{
			c=c/8;
		}
		printf("%d", c%8);
	}
	
	printf("\n16진수 ->");
	count=0;
	while(d>0)
		{
			d=d/16;
			count++;
		}

	for (i=count-1;i>=0;i--)
	{
		d=a;
		for(j=i;j>0;j--)
		{
			d=d/16;
		}
		if(d%16==10)
		printf("A");
		else if(d%16==11)
		printf("B");
		else if(d%16==12)
		printf("C");
		else if(d%16==13)
		printf("D");
		else if(d%16==14)
		printf("E");
		else if(d%16==15)
		printf("F");
		else
		printf("%d", d%16);
	}
}
