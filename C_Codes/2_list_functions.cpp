/*

�������� 4.2-1
void delete(listPointer *first, listPointer trail){
	listPointer temp = trail -> link;
	if(trail)
		trail -> link = trail -> link -> link;
	else
		*first = (*first) -> link;
	free(temp);
}

�������� 4.2-2
listPointer findNum(listPointer *first, int num){
	listPointer temp = (*first) -> link;
	while(temp){
		if(temp -> data == num)
			return temp;
		temp = temp -> link;
	}
	return NULL;
}

�������� 4.2-3
void findDelete(listPointer *first, int num){
	listPointer target, trail;
	while(target = findNum(first, num)){
		trail = *first;
		while(trail -> link != target)
			trail = trail -> link;
		delete(first, trail);
	}
}

�������� 4.2-4
int length(listPointer first){
	int count = 0;
	for(; first; first = first -> link)
		count++;
	return count;
}

//�������� 4.2-5
void deleteOdd(listPointer *first){
	listPointer trail = (*first) -> link, temp;
	whlie(trail && trail -> link){
		temp = trail;
		listPointer target = temp -> link;
		temp-> link = temp -> link -> link;
		free(target);
		trail = temp -> link;
	}
}	// �� �˰����� �ð� ���⵵�� while���� �������̸�, ���� list�� ũ�� n�� ���� O(n)�̴�.
*/
//�������� 4.2-8
#include <stdio.h>
#include <stdlib.h>

typedef struct listNode *listPointer;
typedef struct listNode{
	int data;
	listPointer link;
};

listPointer add(listPointer *first, listPointer x, int data) {
	listPointer temp = (listPointer)malloc(sizeof(listNode));
	temp->data = data;
	if (*first) {
		temp->link = x->link;
		x->link = temp;
	}
	else {
		*first = temp;
		temp->link = NULL;
	}
	return temp;
}

void printList(listPointer first) {
	if (!first)
		printf("    null");
	while (first)
	{
		printf("%5d", first->data);
		first = first->link;
	}
	printf("\n\n");
}

void movr(listPointer *l, listPointer *r) {
	if (*r) {
		listPointer temp;
		temp = *r;
		*r = (*r)->link;
		temp->link = *l;
		*l = temp;
	}
	else {
		printf("\n--------------------------out of index!--------------------------\n");
	}
}

void movl(listPointer *l, listPointer *r) {
	if (*l) {
		listPointer temp;
		temp = *l;
		*l = (*l)->link;
		temp->link = *r;
		*r = temp;
	}
	else {
		printf("\n--------------------------out of index!--------------------------\n");
	}
}

int main() {
	listPointer list1 = NULL, temp = list1;
	for (int i = 0; i < 5; i++) {
		temp = add(&list1, temp, i);
	}
	listPointer l = NULL, r = list1;
	printf("���� list : ");
	printList(list1);
	printf("-----------------------------------------------------------------\n");
	for (int i = 1; i < 7; i++) {
		movr(&l, &r);
		printf("%d�� move right�� list l : ", i);
		printList(l);
		printf("%d�� move right�� list r : ", i);
		printList(r);
	}
	printf("-----------------------------------------------------------------\n");
	for (int i = 1; i < 7; i++) {
		movl(&l, &r);
		printf("%d�� move left�� list l : ", i);
		printList(l);
		printf("%d�� move keft�� list r : ", i);
		printList(r);
	}

	return 0;
}