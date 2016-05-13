#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
void swap(int a[], int i, int j){
	int t;
	t=a[i];
	a[i]=a[j];
	a[j]=t;
} 

void BubbleSort(int a[],int n){
	int i, j;
	for(i=1; i<n; i++){
		for(j=0; j<n-i; j++){
			if(a[j]>a[j+1]){
				swap(a, j, j+1);
			}
		}
	}
}

void Union(int a[],int i,int j,int k){
	int* b;
	b= (int*)malloc(sizeof(int)*(k-i+1));
	int p,q,r;
	p=i;q=j+1;r=0;
	while(p<j+1 && q<k+1){
		if(a[p]<a[q])
			b[r++]=a[p++];
		else
			b[r++]=a[q++];
	}
	if(p==j+1)
		while(q<k+1)
			b[r++]=a[q++];
	else
		while(p<j+1)
			b[r++]=a[p++];
	for(r=0;r<k-i+1;r++){
		a[i+r]=b[r];
	}
	free(b);
}



void Merge(int a[],int start, int end){
	if(start==end)
		return;
	int p = start + (end-start)/2;
	Merge(a,start,p);
	Merge(a,p+1,end);
	Union(a,start,p,end);
}

int main(){
	srand(time(NULL));
	int a[100000];
	int i;
	for(i=0;i<100000;i++){
		a[i]=rand()%100000;
	}
	//Merge(a,0,99999);
	BubbleSort(a,100000);
	printf("End");

	getchar();
	return 0;
}
