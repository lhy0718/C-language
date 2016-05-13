#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)

// init(), insert(), delet(), print_list() 구현
// 구조체, 구조체포인터 사용
// list의 맨 처음은 list의 크기를 알려주는 count와 첫번째 data가 저장된 node을 가리키는 (구조체)포인터(head)로 구성
// 각 list의 구성은 data와 다음 data를 가리키는 포인터의 구조체
// 마지막 list의 포인터는 null을 가리킨다
// 먼저 mamory를 임의로 할당하고, 다음부턴 동적할당으로
// seongwon.cau@gmail.com 으로 다음주 목요일까지 제출

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
	
void insert(list* lptr, int data, int position)		//list에 값을 삽입하는 함수, 노드 삽입 함수. 리스트형 포인터 변수와 값, 위치를 인수로 받는다. 
{
	if (position<1 || position>(lptr->count) + 1)
	{
		printf("Out of Bound\n");					//list범위를 넘어간 위치를 입력하면 오류출력
	}
	nptr new_nptr = (node*)malloc(sizeof(node));	//새로운 node가 들어갈 memory공간을 확보한다.
	new_nptr->data = data;							//입력받은 값을 새로운node에 저장한다.

	if (position == 1)								//첫번째 node라면,
	{
		new_nptr->next = lptr->head;
		lptr->head = new_nptr;						//head노드를 바꿔준다.
	}
	else
	{
		nptr tmp = lptr->head;
		int i;
		for (i = 1; i < position - 1; i++)			//아닐경우에는 head부터 position 까지 순서대로 찾아서 의도한 위치에 값을 저장한다.
		{
			tmp = tmp->next;
		}
		new_nptr->next = tmp->next;
		tmp->next = new_nptr;
	}
	lptr->count++;									//삽입이 되면 list의 크기를 나타내는 count를 하나 증가시킨다.
}

void delet(list* lptr, int position)
{
	if (position<1 || position>(lptr->count) + 1)
	{
		printf("Out of Bound\n");					//list범위를 넘어간 위치를 입력하면 오류출력
	}
	nptr tmp = lptr->head;							//head node를 임의의 저장공간에 일단 저장

	if (position == 1)								//첫번째 node가 선택되었다면, head node를 제거한다.
	{
		lptr->head = tmp->next;
		free(tmp);
	}
	else
	{
		int i;
		for (i = 1; i < position - 1; i++)			//첫번째 node이외의 node가 선택되었다면, head부터 position 까지 순서대로 찾아서,
		{
			tmp = tmp->next;
		}
		nptr tmp2 = tmp->next;						//제거를 위해 임의의 node pointer 저장공간을 만들고,
		tmp->next = tmp2->next;
		free(tmp2);									//제거하고자 한 위치의 node를 제거한다.
	}
	lptr->count--;									//제거가 되면 list의 크기를 나타내는 count를 하나 감소시킨다.
}

void print_list(list* lptr)
{
	nptr tmp = lptr->head;
	printf("\n리스트 출력 : ");
	while (tmp != NULL)							//list포인터가 가리키는 것이 끝의 NULL일때까지
	{
		printf("%d ", tmp->data);				//node의 값 출력
		tmp = tmp->next;						//다음node 로 간다
	}
	printf("\n모두 : %d 개의 값\n", lptr->count);	//count를 출력하여 list의 길이를 콘솔로 표시한다.
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
