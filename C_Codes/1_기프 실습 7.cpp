#include<stdio.h>

int main()
{
	int a=-1, sum=0, min=1000, max=0, count=-1;
	while (a!=0)
	{
		a=-1;
	
		printf("\n���� ����(1 ~ 1000)�� �Է��ϼ���.");
		scanf("%d", &a);
		
		if(a<0)
		{
			printf("ERROR");
			return 0;
		}
		
		if (a==0)
		{}
		else if (a<min)
		min=a;
		if (a>max)
		max=a;
		sum=sum+a;
		count++;
	}
	printf("���� ū �� : %d \n���� ���� �� : %d \n�� �� : %d \n��� : %f\n", max, min, sum, (float)sum/count);
}
