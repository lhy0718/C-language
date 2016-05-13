#include<stdio.h>
#include<math.h>

void hw(int a[100])
{
	int n, i, j;
	printf("\n");
	for (i = 0; i < 100; i++)
	{
		a[i] = i + 1;
	}
	printf("정수 n을 입력하세요 : ");		//입력 포맷
	scanf_s("%d",&n);
	printf("start");
	for (i = 0; i < n; i++)
	{
		if (a[i] == 1)
		{
			a[i] = 0;						//1은 제외
		}
		else
		if (a[i] != 0)						//제외되지 않으면 실행
		{
			for (j = 2; j < n; j++)
			{
				a[((i+1)*j)-1] = 0;			//배수 제외
			}
		}
	}
	printf("\n");
	printf("end\n");
	for (i = 0; i < n; i++)
	{
		if (a[i] == 0)						//제외된건 출력하지 않음
			printf(" \t");
		else
			printf("%d\t", a[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
}

int main()
{
	int arr[10000], n, i, j;

	while (true)
	{
		hw(arr);							//함수호출
	}
}