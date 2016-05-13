#include<stdio.h>
#include<string.h>
# pragma warning(disable:4996)

void charSort(char string[100])
{
	int i, j;
	char t=0;
	for (i = 0; i < strlen(string); i++)
	{
		for (j = strlen(string)-1; j >= i; j--)
		{
			if (string[j]<string[j + 1])
			{
				t = string[j];
				string[j] = string[j + 1];
				string[j + 1] = t;
			}
		}
	}
	printf("\n소팅된 값");
	printf("\n%s", string);
}

int main()
{
	char string[100];
	int i, j;
	char t=0;
	int len=0;
	for (i = 0; i < 100; i++)
	{
		string[i] = '\0';
	}
	printf("문자열 입력 \n");
	scanf("%s", &string);
	printf("입력받은 값");
	printf("\n%s", string);
	
	printf("\n배열크기 : %d",strlen(string));

	charSort(string);
	

	printf("\n---------END--------");

	while (true)
	{

	}
	return 0;
}