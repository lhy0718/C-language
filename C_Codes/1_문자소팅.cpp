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
	printf("\n���õ� ��");
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
	printf("���ڿ� �Է� \n");
	scanf("%s", &string);
	printf("�Է¹��� ��");
	printf("\n%s", string);
	
	printf("\n�迭ũ�� : %d",strlen(string));

	charSort(string);
	

	printf("\n---------END--------");

	while (true)
	{

	}
	return 0;
}