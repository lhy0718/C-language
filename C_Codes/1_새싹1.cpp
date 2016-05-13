#include <stdio.h>

int main()
{
	int a, i, j;
	printf("숫자를 입력 하세요 : ");
	scanf("%d", &a);
	if(a<=1 || a>=9)
	printf("2~8의 정수를 입력하세요.");
	else
	{	
			printf("\n%d단                        %d단", a, a+1);
			for(i=1 ; i<10 ; i++)
			{
				printf("\n%d * %d = %2d                 %d * %d = %2d", a, i, a*i, a+1, i, (a+1)*i);
			}
			
	}
	return 0;
}

