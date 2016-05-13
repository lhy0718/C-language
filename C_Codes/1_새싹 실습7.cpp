#include<stdio.h>
int i, j, t, count=0, arr[100];
void order_1();
void order_2();
void order_3();
int main()
{
	int num;
	while (1)
	{
	printf("1. 숫자 저장하기\n2. 짝수 제거하기\n3. 소수 제거하기\n");
	printf("어느 명령을 수행할까요?");
	scanf("%d", &num);
	printf("\n");
	
	if (num==1)
	{
		order_1();	
		printf("\n\n"); 
	}
	
	else if (num==2)
	{
		order_2();
		printf("\n\n"); 
	}
	
	else if (num==3)
	{
		order_3();
		printf("\n\n");
	}
	
	}
	return 0;
}

void order_1()
{
	printf("숫자를 하나씩 입력하세요.\n");
	for (i=count; i<100; i++)
	{
		scanf("%d", &arr[i]);
		count++;
		if (arr[i]==0)
		{
			count--;
			break;
		}
	}
	for (j=count-2; j>=0; j--)
	{
		for (i=0; i<=j; i++)
		{
			if(arr[i]>arr[i+1])
			{
				t=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=t;
			}
		}
	}
	for (i=0; i<count; i++)
	{
		if(arr[i]==arr[i+1])
		{
			for (j=i; j<count; j++)
			{
				arr[j]=arr[j+1];
			}
			i--;
			count--;
		}
	}
	
	printf("저장된 수 : ");
	for (i=0; i<count; i++)
	{
		printf("%d  ", arr[i]);
	}
}

void order_2()
{
	printf("짝수를 제거합니다.\n");
	for(i=0; i<count; i++)
	{
		if(arr[i]%2==0)
		{
			for (j=i; j<count; j++)
			{
				arr[j]=arr[j+1];
			}
			i--;
			count--;
		}
	}
	
	printf("저장된 수 : ");
	for (i=0; i<count; i++)
	{
		printf("%d  ", arr[i]);
	}
}

void order_3()
{
	printf("소수를 제거합니다.\n");
	for(i=0; i<count; i++)
	{
		t=0;
		if (arr[i]==1)
		{
			//아무것도 안함 
		}
		else if (arr[i]==2)
		{
			for (j=i; j<count; j++)
			{
				arr[j]=arr[j+1];
			}
			i--;
			count--;
		}
		else
		{
			for(j=2; j<arr[i]; j++)
			{
				if (arr[i]%j==0)
					t++;
			}
			if (t==0)
			{
				for (j=i; j<count; j++)
				{
					arr[j]=arr[j+1];
				}
				i--;
				count--;
			}
		}
	}
	
	printf("저장된 수 : ");
	for (i=0; i<count; i++)
	{
		printf("%d  ", arr[i]);
	}
}
