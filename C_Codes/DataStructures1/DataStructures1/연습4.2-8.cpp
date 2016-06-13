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
	printf("원래 list : ");
	printList(list1);
	printf("-----------------------------------------------------------------\n");
	for (int i = 1; i < 7; i++) {
		movr(&l, &r);
		printf("%d번 move right후 list l : ", i);
		printList(l);
		printf("%d번 move right후 list r : ", i);
		printList(r);
	}
	printf("-----------------------------------------------------------------\n");
	for (int i = 1; i < 7; i++) {
		movl(&l, &r);
		printf("%d번 move left후 list l : ", i);
		printList(l);
		printf("%d번 move keft후 list r : ", i);
		printList(r);
	}

	return 0;
}