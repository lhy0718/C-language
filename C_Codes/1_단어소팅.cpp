#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable : 4996)

char **sort(char **pp, int n)
{
	int i, j;
	char *temp;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (pp[j][0] > pp[j + 1][0])			//�ܾ��� ù ���� ��
			{
				temp = pp[j];
				pp[j] = pp[j + 1];
				pp[j + 1] = temp;					//���������� �ܾ� ��ġ �ٲ�
			}
		}
	}
	return pp;
}

int main()
{
	int n = 1, m = 0, i;
	char input[100];
	char **p;

	gets(input);
	for (i = 0; i < 100; i++)
	{
		if (input[i] == '\0')
			break;
		if (input[i] == ' ')
		{
			n++;									//' '�� �����Ǵ� �ܾ��� ���� ���
		}
	}
	p = (char **)malloc(n*sizeof(char*));			//�ܾ� ������ŭ �����Ҵ�
	n = 0;
	for (i = 0; i < 100; i++)
	{
		if (input[i] == '\0')
			break;
		if (input[i] == ' ')
		{
			n++;
			m = 0;									//���� �ܾ��� ���� ���
		}
		else
		{
			m++;
			p[n] = (char *)malloc(m*sizeof(char));	//���� �ܾ� ���̸�ŭ �����Ҵ�
		}
	}

	n = 0, m = 0;
	for (i = 0; i < 100; i++)
	{
		if (input[i] == '\0')
		{
			p[n][m] = '\0';			//�ܾ��� ���κп� NULL�Է�
			break;
		}
		if (input[i] == ' ')
		{
			p[n][m] = '\0';			//�ܾ��� ���κп� NULL�Է�
			n++;
			m = 0;
		}
		else
		{
			p[n][m] = input[i];		//������ �迭�� ��������
			m++;
		}
	}

	p = sort(p, n);					//���� �Լ��� ���������Ϳ� �ܾ�� �μ��� ����

	for (i = 0; i < n + 1; i++)
	{
		printf("\n%s", p[i]);		//���� �� ��� ���
	}

	while (true)
	{

	}
	return 0;
}
