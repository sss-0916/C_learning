/*
**	??????????????????
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

/*---?????????????---*/
int stringLength(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		++count;
		++str;
	}
	return count;
}

/*---????????????---*/
void reverse_string(char* str)
{
	char temp = 0;
	if (*str != '\0')
	{
		char* start = str;
		char* end = str + stringLength(str) - 1;
		temp = *start;
		*start = *end;
		*end = '\0';
		reverse_string(str + 1);
		*end = temp;
	}
}

int main()
{
	char str[] = "dlroWolleH";
	printf("??????????????: %s\n", str);
	reverse_string(str);
	printf("???��?????????: %s\n", str);
	system("pause");
	return 0;
}