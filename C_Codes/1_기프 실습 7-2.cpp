#include<stdio.h>

int main()
{
	int a, b, c, d, i, j, k;
	printf("\n���� ����a(1 ~ 1000)�� �Է��ϼ���: ");
	scanf("%d", &a);
	printf("\n���� ����b(1 ~ 1000)�� �Է��ϼ���: ");
	scanf("%d", &b);		
	printf("\n���� ����c(1 ~ 1000)�� �Է��ϼ���: ");
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
					printf("\na�� b�� c�� �ּҰ������ %d", d);
					return 0;
				}
			}
		}
	}
	
}
