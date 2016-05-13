#include<stdio.h>
int main()
{
	int one = 1;
	int *to_one = &one;
	one = one +1;
	printf("%d\n", one);
	one = *to_one +3;
	printf("%d\n", one);
	*to_one + one +5;
	printf("%d\n", one);
	int a[256];
	return 0;
}
