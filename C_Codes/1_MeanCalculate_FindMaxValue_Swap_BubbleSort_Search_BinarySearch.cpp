#include <stdio.h>

//�迭�� �޾Ƽ� �� ������ ����� ����ϴ� �Լ�.

double mean(int a[],int n){
	int s=0;
	int i;
	for(i=0; i<n; i++){
		s+=a[i];
	}
	return (double)s/n;
}

//�ִ��� ã���ִ� �Լ�.
int max(int a[],int n){
	int m=0;
	int i;
	for(i=0; i<n; i++){
		if(m<a[i])
			m=a[i];
	}
	return m;
}

//�������� �迭�� ���� �ٲپ��.  

// �迭�� i��° �װ�, j��°���� �ٲٴ� �Լ�.
void swap(int a[], int i, int j){
	int t;
	t=a[i];
	a[i]=a[j];
	a[j]=t;
} 

//Bubble sort
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

//Search : �迭���� ���ϴ� ���� �ִ��� Ȯ��. ������ �� �ּҸ� ���.
int normals(int a[],int n,int k){
	int i;
	for(i=0; i<n; i++){
		if(k==a[i])
			return i;
	}
	return -1;
} 
//������ �Ǿ��ִ� ��쿡�� �ξ� ���� ã�� �� �ִ� ����� ����. -> Binary Search.
int BinarySearch(int a[],int i,int j,int k){
	if(j<i){
		printf("List error");
		return -1;
	}
	if(i==j){
		if(a[i]==k)
			return i;
		else return -1;
	}
	int q=i+(j-i)/2+1;
	if(a[q]>k)
		return BinarySearch(a,i,q-1,k);
	else return BinarySearch(a,q,j,k);
} 

int main(){
	int a[10]={97,93,59,32,57,107,59,98,99,100};
	int i;
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	BubbleSort(a,10);
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("%d %d",normals(a,10,57),BinarySearch(a,0,9,57));
	getchar();
	return 0;
} 
