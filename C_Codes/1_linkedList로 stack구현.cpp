#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)

typedef struct _node		//list�� ����� node�� �����Ѵ�.
{
	int data;				//node�� ����� ���̴�.
	struct _node *next;		//������ node�� ����Ű�� �������̴�.
}node;

typedef node* nptr;

typedef struct _list		//list�� ���� ����ü�� �����Ѵ�.
{
	int count;				//list�� ũ�⸦ �˷��ִ� count
	nptr head;				//list�� �� ó���� ��Ÿ���� ������
}list;

void init(list* lptr)		//list�� �ʱ�ȭ �ϴ� �Լ�
{
	lptr->count = 0;		//list�� ũ�⸦ �˷��ִ� data(count)�� 0���� �ʱ�ȭ�Ѵ�.
	lptr->head = NULL;		//list�� �����͸� NULL�� �ʱ�ȭ�Ѵ�.
}

int pop(list* lptr)
{
	int temp;
	nptr tmp = lptr->head;							//head node�� ������ ��������� �ϴ� ����

	if (lptr->count == 0)								//ù��° node�� ���õǾ��ٸ�, head node�� �����Ѵ�.
	{
		lptr->head = tmp->next;
		temp = tmp->data;
		free(tmp);
	}
	else
	{
		int i;
		for (i = 1; i < lptr->count; i++)			//ù��° node�̿��� node�� ���õǾ��ٸ�, head���� position ���� ������� ã�Ƽ�,
		{
			tmp = tmp->next;
		}
		nptr tmp2 = (nptr)malloc(sizeof(nptr));
		temp = tmp->data;
		free(tmp);									//�����ϰ��� �� ��ġ�� node�� �����Ѵ�.
	}
	lptr->count--;									//���Ű� �Ǹ� list�� ũ�⸦ ��Ÿ���� count�� �ϳ� ���ҽ�Ų��.
	return temp;
}

void push(list* lptr, int input)
{
	nptr new_nptr = (node*)malloc(sizeof(node));	//���ο� node�� �� memory������ Ȯ���Ѵ�.
	new_nptr->data = input;

	if (lptr->count == 0)
	{
		new_nptr->next = lptr->head;
		lptr->head = new_nptr;
	}
	else
	{
		nptr tmp = lptr->head;
		int i;
		for (i = 1; i < lptr->count; i++)
		{
			tmp = tmp->next;
		}
		new_nptr->next = tmp->next;
		tmp->next = new_nptr;
	}
	lptr->count++;
}

bool isEmpty(list* lptr)
{
	if (lptr->count == 0)
		return true;
	else
		return false;
}

bool isFull(list* lptr, int count)
{
	if (lptr->count == count)
		return true;
	else
		return false;

}

void print_list(list* lptr)
{
	nptr tmp = lptr->head;
	while (tmp != NULL)							//list�����Ͱ� ����Ű�� ���� ���� NULL�϶�����
	{
		printf("%d ", tmp->data);				//node�� �� ���
		tmp = tmp->next;						//����node �� ����
	}
}

void reverse(list* lptr)
{
	list* list2 = (list*)malloc(sizeof(list));	//�ٲ� �� list
	init(list2);
	while (!isEmpty(lptr))
	{
		push(list2, pop(lptr));
		print_list(lptr);
		printf("      \t\t ");
		print_list(list2);

		printf("\n");
	}
}



int main()
{
	int temp;
	int count = 0, num = -1;
	list* list1 = (list*)malloc(sizeof(list));
	init(list1);

	printf("input : ");
	do
	{
		scanf("%d", &temp);
		push(list1, temp);
		count++;
	} while (getc(stdin) == '\n');

	printf("\n-------------------------------------------------\n");
	reverse(list1);

	while (true)
	{

	}
	return 0;
}