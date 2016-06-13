#include "list.h"

listPointer cityList = NULL;

void Search(char cityName[10]) {
	listPointer temp = findName(cityList, cityName);
	if (temp) {
		printf("%d, %d\n", temp->data.x, temp->data.y);
	}
	else
		printf("%s은(는) 존재하지 않습니다.\n", cityName);
}

void Addcity(int x, int y, char cityName[10]) {
	if (findName(cityList, cityName))
		printf("%s은(는) 이미 존재합니다.\n", cityName);
	else {
		City tempCity;
		strcpy_s(tempCity.name, cityName);
		tempCity.x = x;
		tempCity.y = y;
		add(&cityList, tempCity);
	}
}

void Addpath(char cityName1[10], char cityName2[10], int time) {
	listPointer city[2], temp = cityList;
	int index = 0;

	while (temp) {
		if (!strcmp(cityName1, temp->data.name) || !strcmp(cityName2, temp->data.name)) {
			city[index++] = temp;
			if (index > 1) {
				addPath(city[0], city[1], time);
				return;
			}
		}
		temp = temp->link;
	}
	printf("%s, %s 중 하나 또는 모두가 리스트에 존재하지 않습니다.\n", cityName1, cityName2);
}

void RemoveCity(char cityName[10]) {
	listPointer target = findName(cityList, cityName);
	listPointer temp = target->path;
	while (temp->time != 0) {
		temp = target->path->link;
		pathRemove(temp);
	}
	printf("\n");
	remove(&cityList, target);
}

void RemovePath(char cityName1[10], char cityName2[10]) {
	listPointer city[2], temp = cityList;
	int index = 0;

	while (temp) {
		if (!strcmp(cityName1, temp->data.name) || !strcmp(cityName2, temp->data.name)) {
			city[index++] = temp;
			if (index > 1) {
				listPointer target = findPath(city[0], city[1]->data.name);
				pathRemove(target->link);
				pathRemove(target);
				return;
			}
		}
		temp = temp->link;
	}
	printf("%s, %s 중 하나 또는 모두가 리스트에 존재하지 않습니다.\n", cityName1, cityName2);
}

listPointer ShortestPath(listPointer cityName1, listPointer cityName2) {
	listPointer shortestPath = NULL, temp = cityList;
	int listSize = length(cityList);
	listNode cityArray[] = cityList->toArray();
	int cost[][] = cityArray.costs();
	int city1 = cityArray.findIndex(cityName1);
	int city2 = cityArray.findIndex(cityName2);
	bool found[listSize];
	int distance[listSize], predecesson[listSize];
	int u, w;
	for (int i = 0; i < listSize; i++) {
		found[i] = false;
		distance[i] = cost[city1][i];
	}
	found[city1] = true;
	for (int i = 0; i < listSize - 2; i++) {
		u = choose(distance, listSize, found);
		if(u>0){
			found[u] = true;
			predecesson[i] = u;
		}
		for (w = 0; w < listSize; w++) {
			if (!found[w])
				if (distance[u] + cost[u][w] < distance[w])
					distance[w] = distance[u] + cost[u][w];
		}
	}
	if (distance[city2] == -1)
		return NULL;
	for (int i = city2; i != city1; i= predecesson[i]) {
		add(&shortestPath, cityArray[i].data);
	}
	return shortestPath;
}

listPointer RegionSearch(char cityName[10], int radius) {
	listPointer list = cityList, rlist = NULL, target, retlist;
	int x, y;
	bool founded = false;
	for (; list ; list = list->link) {
		if (!strcmp(list->data.name, cityName)) {
			x = list->data.x;
			y = list->data.y;
			rlist = list->rlink;
			target = list;
			founded = true;
		}
		else if (founded) {
			if ((list->data.x - target->data.x)*(list->data.x - target->data.x) + (list->data.y - target->data.y)*(list->data.y - target->data.y) < radius*radius) {
				printf("%s, %d, %d\n", list->data.name, list->data.x, list->data.y);
				add(&retlist, list->data);
			}
		}
	}
	for (; rlist; rlist = rlist->rlink) {
		if ((list->data.x - target->data.x)*(list->data.x - target->data.x) + (list->data.y - target->data.y)*(list->data.y - target->data.y) < radius*radius) {
			printf("%s, %d, %d\n", rlist->data.name, rlist->data.x, rlist->data.y);
			add(&retlist, rlist->data);
		}
	}
	return retlist;
}

void RegionConnectivity(char cityName[10], int radius) {
	listPointer region, temp1, temp2;
	region = temp1 = RegionSearch(cityName, radius);
	while (temp1){
		temp2 = temp1->link;
		while (temp2) {
			listPointer temp = ShortestPath(temp1, temp2);
			if (temp) {
				printf("%s, %s", temp1->data.name, temp2->data.name);
				for (; temp; temp = temp->link) {
					if (findName(region, temp->data.name)) {
						printf("의 최단거리는 지역을 벗어나지 않습니다.\n");
						break;
					}
				}
				printf("의 최단거리는 지역을 벗어납니다.\n");
			}
		}
		temp1 = temp1->link;
	}
}

int main() {
	Addcity(1, 1, "seoul");
	Addcity(1, 1, "inchon");
	printList(cityList);
	Search("seoul");
	RegionSearch("seoul", 10);
	printf("0\n");
	Addpath("seoul", "inchon", 10);
	printf("0\n");
	RemoveCity("inchon");
	printf("0\n");
	printList(cityList);
	return 0;
}