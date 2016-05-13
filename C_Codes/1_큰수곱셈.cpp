#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable : 4996)

void mul(char a[100], char b[100])
{
	int la = strlen(a), lb = strlen(b);
	int i,j;
	char aa[200], bb[200];
	int aint[100], bint[100];
	int s[100];

	for (i=0; i<la; i++)
	{
		aa[i]='\0';
	}
	for (i=0; i<lb; i++)
	{
		bb[i]='\0';
	}
	for (i=0; i<100; i++)
	{
		s[i] = 0;
		aint[i] = 0;
		bint[i] = 0;
	}							//��� �迭�� �ʱ�ȭ �մϴ�. 
	
	for (i=0; i<la; i++)
	{
		aa[i*2]=a[i];
	}
	for (i=0; i<lb; i++)
	{
		bb[i*2]=b[i];
	}							//aa,bb �迭�� NULL���̻��̿� �Է°��� �ѱ��ھ� �ֽ��ϴ�. 
	
	for (i=0; i<la; i++)
	{
		aint[i]=atoi(aa+2*i);
	}
	for (i=0; i<lb; i++)
	{
		bint[i]=atoi(bb+2*i);	//�Է°��� ���ھ� int������ ��ȯ�Ͽ� �迭�� �����մϴ�. 
	}
	
	for(i=0; i<la; i++)
	{
		for(j=0; j<lb; j++)
		{
			s[(i+1)+(j+1)-2] += aint[la-i-1] * bint[lb-j-1];	//���� ����� �ڸ����� ���߾� �����Ͽ� �����մϴ�. 
		}
	}
	for(i=0; i<100; i++)
	{
			s[i+1] += s[i]/10;
			s[i] = s[i]%10;		//�� �ڸ����� ��������� �����ڸ��� �����ϰ�, �ڸ����� �Ѿ ���� �����ڸ��� ���մϴ�. 
	}
	for(i=la+lb-1; i>=0; i--)
	{
		if(i==la+lb-1 && s[la+lb-1]==0)
		printf("");				//ù��°���� 0�̸� ������� �ʽ��ϴ�. 
		else
		{
			printf("%d",s[i]);	//����� ������ �ڸ����� �������� ����մϴ�. 
			if(i != 0 && i%3 == 0)
				printf(",");	//3�ڸ����� ����ǥ�� ����մϴ�. 
		}
	}
}

int main()
{
	char a[100];
	char b[100];

	while (true)
	{
		printf("\nEnter the first number : ");
		scanf("%s", &a);
		printf("\nEnter the second number : ");
		scanf("%s", &b);
	
		printf("\nMultiplication of two number : ");
		mul(a,b);
		printf("\n-----------------------------------------------------------------");
	}
}
