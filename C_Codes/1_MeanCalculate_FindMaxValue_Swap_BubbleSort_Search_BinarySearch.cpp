#include <stdio.h>

//배열을 받아서 그 값들의 평균을 계산하는 함수.

double mean(int a[],int n){
	int s=0;
	int i;
	for(i=0; i<n; i++){
		s+=a[i];
	}
	return (double)s/n;
}

//최댓값을 찾아주는 함수.
int max(int a[],int n){
	int m=0;
	int i;
	for(i=0; i<n; i++){
		if(m<a[i])
			m=a[i];
	}
	return m;
}

//이제부턴 배열의 값을 바꾸어보자.  

// 배열의 i번째 항과, j번째항을 바꾸는 함수.
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

//Search : 배열에서 원하는 값이 있는지 확인. 있으면 그 주소를 출력.
int normals(int a[],int n,int k){
	int i;
	for(i=0; i<n; i++){
		if(k==a[i])
			return i;
	}
	return -1;
} 
//정렬이 되어있는 경우에는 훨씬 빨리 찾을 수 있는 방법이 존재. -> Binary Search.
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
