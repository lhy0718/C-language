#include <stdio.h>
#include <string.h>
#include <time.h>
#define str "123456789"

char *rev1(char *str1)
{
	char *start = str1, *end = str1;
	char temp;
	if(*str1)
	{
		while(*end)
			++end;
		--end;
		while(start<end)
		{
			temp = *start;
			*start++ = *end;
			*end-- = temp;
		}
	}
	return str1;
}

char *rev2(char *str2)
{
	int start = 0, end = strlen(str2)-1;
	char temp;
	if(end>0)
	{
		while(start<end)
		{
			temp = str2[start];
			str2[start] = str2[end];
			start++;
			str2[end] = temp;
			end--;
		}
	}
	return str2;
}

int main()
{
	time_t start=0, end=0;
	char arr1[1000] = str;
	char *result1;
	char *result2;
	
	printf("-reverse1\n"); 
	printf("¿ø·¡string : %s\n",arr1);
	start = clock();
	result1 = rev1(arr1);
	end = clock();
	printf("¹Ù²ïstring : %s\n",result1);
	
	printf("-reverse2\n"); 
	printf("¿ø·¡string : %s\n",result1);
	start = clock();
	result2 = rev2(result1);
	end = clock();
	printf("¹Ù²ïstring : %s\n",result2);

	return 0;
} 
