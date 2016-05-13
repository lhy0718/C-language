#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)

// init(), insert(), delet(), print_list() ����
// ����ü, ����ü������ ���
// list�� �� ó���� list�� ũ�⸦ �˷��ִ� count�� ù��° data�� ����� node�� ����Ű�� (����ü)������(head)�� ����
// �� list�� ������ data�� ���� data�� ����Ű�� �������� ����ü
// ������ list�� �����ʹ� null�� ����Ų��
// ���� mamory�� ���Ƿ� �Ҵ��ϰ�, �������� �����Ҵ�����
// seongwon.cau@gmail.com ���� ������ ����ϱ��� ����

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
	
void insert(list* lptr, int data, int position)		//list�� ���� �����ϴ� �Լ�, ��� ���� �Լ�. ����Ʈ�� ������ ������ ��, ��ġ�� �μ��� �޴´�. 
{
	if (position<1 || position>(lptr->count) + 1)
	{
		printf("Out of Bound\n");					//list������ �Ѿ ��ġ�� �Է��ϸ� �������
	}
	nptr new_nptr = (node*)malloc(sizeof(node));	//���ο� node�� �� memory������ Ȯ���Ѵ�.
	new_nptr->data = data;							//�Է¹��� ���� ���ο�node�� �����Ѵ�.

	if (position == 1)								//ù��° node���,
	{
		new_nptr->next = lptr->head;
		lptr->head = new_nptr;						//head��带 �ٲ��ش�.
	}
	else
	{
		nptr tmp = lptr->head;
		int i;
		for (i = 1; i < position - 1; i++)			//�ƴҰ�쿡�� head���� position ���� ������� ã�Ƽ� �ǵ��� ��ġ�� ���� �����Ѵ�.
		{
			tmp = tmp->next;
		}
		new_nptr->next = tmp->next;
		tmp->next = new_nptr;
	}
	lptr->count++;									//������ �Ǹ� list�� ũ�⸦ ��Ÿ���� count�� �ϳ� ������Ų��.
}

void delet(list* lptr, int position)
{
	if (position<1 || position>(lptr->count) + 1)
	{
		printf("Out of Bound\n");					//list������ �Ѿ ��ġ�� �Է��ϸ� �������
	}
	nptr tmp = lptr->head;							//head node�� ������ ��������� �ϴ� ����

	if (position == 1)								//ù��° node�� ���õǾ��ٸ�, head node�� �����Ѵ�.
	{
		lptr->head = tmp->next;
		free(tmp);
	}
	else
	{
		int i;
		for (i = 1; i < position - 1; i++)			//ù��° node�̿��� node�� ���õǾ��ٸ�, head���� position ���� ������� ã�Ƽ�,
		{
			tmp = tmp->next;
		}
		nptr tmp2 = tmp->next;						//���Ÿ� ���� ������ node pointer ��������� �����,
		tmp->next = tmp2->next;
		free(tmp2);									//�����ϰ��� �� ��ġ�� node�� �����Ѵ�.
	}
	lptr->count--;									//���Ű� �Ǹ� list�� ũ�⸦ ��Ÿ���� count�� �ϳ� ���ҽ�Ų��.
}

void print_list(list* lptr)
{
	nptr tmp = lptr->head;
	printf("\n����Ʈ ��� : ");
	while (tmp != NULL)							//list�����Ͱ� ����Ű�� ���� ���� NULL�϶�����
	{
		printf("%d ", tmp->data);				//node�� �� ���
		tmp = tmp->next;						//����node �� ����
	}
	printf("\n��� : %d ���� ��\n", lptr->count);	//count�� ����Ͽ� list�� ���̸� �ַܼ� ǥ���Ѵ�.
}

int main()
{
	int pos = 0, data = 0 , n = 0;
	list* list1 = (list*)malloc(sizeof(list));
	init(list1);

	while (true)
	{
		while (n != 1 && n !=2)
		{
			printf("\n1. insert  |  2. delete\nSelect option : ");
			scanf("%d", &n);
		}
		if (n == 1)
		{
			printf("\ninsert data : ");
			scanf("%d", &data);
			printf("\ninsert position : ");
			scanf("%d", &pos);

			insert(list1, data, pos);
			print_list(list1);
		}
		else if (n == 2)
		{
			printf("\ndelete position : ");
			scanf("%d", &pos);

			delet(list1, pos);
			print_list(list1);
		}
		n = 0;
	}
	return 0;
}
