#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable : 4996)

void mul(char a[100], char b[100])
{
	int la = strlen(a), lb = strlen(b);
	int i,j;
	char aa[200], bb[200];
	int aint[100], bint[100];
	int s[100];

	for (i=0; i<la; i++)
	{
		aa[i]='\0';
	}
	for (i=0; i<lb; i++)
	{
		bb[i]='\0';
	}
	for (i=0; i<100; i++)
	{
		s[i] = 0;
		aint[i] = 0;
		bint[i] = 0;
	}							//모든 배열을 초기화 합니다. 
	
	for (i=0; i<la; i++)
	{
		aa[i*2]=a[i];
	}
	for (i=0; i<lb; i++)
	{
		bb[i*2]=b[i];
	}							//aa,bb 배열의 NULL사이사이에 입력값을 한글자씩 넣습니다. 
	
	for (i=0; i<la; i++)
	{
		aint[i]=atoi(aa+2*i);
	}
	for (i=0; i<lb; i++)
	{
		bint[i]=atoi(bb+2*i);	//입력값을 한자씩 int형으로 변환하여 배열로 저장합니다. 
	}
	
	for(i=0; i<la; i++)
	{
		for(j=0; j<lb; j++)
		{
			s[(i+1)+(j+1)-2] += aint[la-i-1] * bint[lb-j-1];	//곱셈 결과를 자리수에 맟추어 누적하여 저장합니다. 
		}
	}
	for(i=0; i<100; i++)
	{
			s[i+1] += s[i]/10;
			s[i] = s[i]%10;		//각 자리수의 곱셈결과를 일의자리만 저장하고, 자리수를 넘어간 수는 다음자리에 더합니다. 
	}
	for(i=la+lb-1; i>=0; i--)
	{
		if(i==la+lb-1 && s[la+lb-1]==0)
		printf("");				//첫번째수가 0이면 출력하지 않습니다. 
		else
		{
			printf("%d",s[i]);	//저장된 각각의 자리수를 역순으로 출력합니다. 
			if(i != 0 && i%3 == 0)
				printf(",");	//3자리마다 구분표를 출력합니다. 
		}
	}
}

int main()
{
	char a[100];
	char b[100];

	while (true)
	{
		printf("\nEnter the first number : ");
		scanf("%s", &a);
		printf("\nEnter the second number : ");
		scanf("%s", &b);
	
		printf("\nMultiplication of two number : ");
		mul(a,b);
		printf("\n-----------------------------------------------------------------");
	}
}
