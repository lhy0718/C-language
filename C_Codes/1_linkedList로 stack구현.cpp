#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)

typedef struct _node		//list의 요소인 node를 정의한다.
{
	int data;				//node에 저장된 값이다.
	struct _node *next;		//각각의 node를 가리키는 포인터이다.
}node;

typedef node* nptr;

typedef struct _list		//list에 대한 구조체를 정의한다.
{
	int count;				//list의 크기를 알려주는 count
	nptr head;				//list의 맨 처음을 나타내는 포인터
}list;

void init(list* lptr)		//list를 초기화 하는 함수
{
	lptr->count = 0;		//list의 크기를 알려주는 data(count)를 0으로 초기화한다.
	lptr->head = NULL;		//list의 포인터를 NULL로 초기화한다.
}

int pop(list* lptr)
{
	int temp;
	nptr tmp = lptr->head;							//head node를 임의의 저장공간에 일단 저장

	if (lptr->count == 0)								//첫번째 node가 선택되었다면, head node를 제거한다.
	{
		lptr->head = tmp->next;
		temp = tmp->data;
		free(tmp);
	}
	else
	{
		int i;
		for (i = 1; i < lptr->count; i++)			//첫번째 node이외의 node가 선택되었다면, head부터 position 까지 순서대로 찾아서,
		{
			tmp = tmp->next;
		}
		nptr tmp2 = (nptr)malloc(sizeof(nptr));
		temp = tmp->data;
		free(tmp);									//제거하고자 한 위치의 node를 제거한다.
	}
	lptr->count--;									//제거가 되면 list의 크기를 나타내는 count를 하나 감소시킨다.
	return temp;
}

void push(list* lptr, int input)
{
	nptr new_nptr = (node*)malloc(sizeof(node));	//새로운 node가 들어갈 memory공간을 확보한다.
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
	while (tmp != NULL)							//list포인터가 가리키는 것이 끝의 NULL일때까지
	{
		printf("%d ", tmp->data);				//node의 값 출력
		tmp = tmp->next;						//다음node 로 간다
	}
}

void reverse(list* lptr)
{
	list* list2 = (list*)malloc(sizeof(list));	//바뀐 후 list
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