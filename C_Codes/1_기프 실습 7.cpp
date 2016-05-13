#include<stdio.h>

int main()
{
	int a=-1, sum=0, min=1000, max=0, count=-1;
	while (a!=0)
	{
		a=-1;
	
		printf("\n양의 정수(1 ~ 1000)를 입력하세요.");
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
	printf("가장 큰 수 : %d \n가장 작은 수 : %d \n총 합 : %d \n평균 : %f\n", max, min, sum, (float)sum/count);
}
