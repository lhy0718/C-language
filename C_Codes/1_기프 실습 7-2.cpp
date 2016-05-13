#include<stdio.h>

int main()
{
	int a, b, c, d, i, j, k;
	printf("\n양의 정수a(1 ~ 1000)를 입력하세요: ");
	scanf("%d", &a);
	printf("\n양의 정수b(1 ~ 1000)를 입력하세요: ");
	scanf("%d", &b);		
	printf("\n양의 정수c(1 ~ 1000)를 입력하세요: ");
	scanf("%d", &c);	

	
	for(i=1 ; i<=1000000000 ; i++)
	{
		for(j=1 ; a*i>=b*j ; j++)
		
		if (a*i==b*j)
		{
			for(k=1 ; b*j>=c*k ; k++)
			{
			if (b*j==c*k)
				{				
					d=a*i;
					printf("\na와 b와 c의 최소공배수는 %d", d);
					return 0;
				}
			}
		}
	}
	
}
