#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct City {
	char name[10];
	int x;
	int y;
};

typedef struct listNode *listPointer;
typedef struct listNode {
	City data;
	listPointer link;
	listPointer rlink;
	int time;
	listPointer path;
	listPointer rpath;
};

listPointer add(listPointer *first, City data) {
	listPointer temp = (listPointer)malloc(sizeof(listNode));
	temp->link = NULL;
	temp->rlink = NULL;
	temp->time = 0;
	temp->path = temp;
	temp->rpath = temp;
	temp->data = data;
	if (*first) {
		temp->link = (*first);
		(*first)->rlink = temp;
		(*first) = temp;
	}
	else
		*first = temp;
	return temp;
}

void addPath(listPointer city1, listPointer city2, int time) {
	listPointer temp1 = (listPointer)malloc(sizeof(listNode));
	listPointer temp2 = (listPointer)malloc(sizeof(listNode));
	temp1->time = temp2->time = time;
	temp1->data = city1->data;
	temp1->link = temp2;
	temp2->data = city2->data;
	temp2->link = temp1;

	temp2->path = city1->path;
	temp2->rpath = city1;
	city1->path->rpath = temp2;
	city1->path = temp2;

	temp1->path = city2->path;
	temp1->rpath = city2;
	city2->path->rpath = temp1;
	city2->path = temp1;
}

void remove(listPointer *first, listPointer target) {
	listPointer temp = target, trail = target->rlink;
	if (target != *first) {
		trail->link = target->link;
		target->link->rlink = trail;
	}
	else {
		*first = (*first)->link;
		(*first)->rlink = NULL;
	}
	free(temp);
}

void pathRemove(listPointer target) {
	listPointer temp = target, trail = target->rpath;
	trail->path = target->path;
	target->path->rpath = trail;
	printf("%s\t", temp->data.name);
	free(temp);
}

listPointer findName(listPointer first, char cityName[10]) {
	while (first) {
		if (!strcmp(first->data.name, cityName))
			return first;
		first = first->link;
	}
	return NULL;
}

listPointer findPath(listPointer first, char cityName[10]) {
	first = first->path;
	while (first) {
		if (!strcmp(first->data.name, cityName))
			return first;
		first = first->path;
	}
	return NULL;
}

char* findRemove(listPointer *first, char cityName[10]) {
	listPointer target = findName(*first, cityName);
	char* temp = target->data.name;
	remove(first, target);
	return temp;
}

char* findPathRemove(listPointer first, char cityName[10]) {
	listPointer target = findPath(first, cityName);
	char* temp = target->data.name;
	pathRemove(target);
	return temp;
}

int length(listPointer first) {
	int count = 0;
	for (; first; first = first->link)
		count++;
	return count;
}

void printList(listPointer first) {
	if (!first)
		printf("\tnull");
	while (first)
	{
		printf("%s\t", first->data.name);
		first = first->link;
	}
	printf("\n\n");
}