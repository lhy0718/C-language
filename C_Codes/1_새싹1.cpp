#include <stdio.h>

int main()
{
	int a, i, j;
	printf("���ڸ� �Է� �ϼ��� : ");
	scanf("%d", &a);
	if(a<=1 || a>=9)
	printf("2~8�� ������ �Է��ϼ���.");
	else
	{	
			printf("\n%d��                        %d��", a, a+1);
			for(i=1 ; i<10 ; i++)
			{
				printf("\n%d * %d = %2d                 %d * %d = %2d", a, i, a*i, a+1, i, (a+1)*i);
			}
			
	}
	return 0;
}

